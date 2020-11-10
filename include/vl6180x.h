#include "Adafruit_VL6180X.h"

namespace vl6180x {
namespace _private {
Adafruit_VL6180X vl = Adafruit_VL6180X();

}

void setup() {
    Serial.println("** Adafruit VL6180x");
    if (!_private::vl.begin()) {
        Serial.println("Adafruit VL6180x KO!!!!!!!");
    }
    Serial.print("  OK");
}



int getDistance(){
     uint8_t range = _private::vl.readRange();
    uint8_t status = _private::vl.readRangeStatus();
    int distance = -1;
    // si no hay error, coge la distancia 
    if (status == VL6180X_ERROR_NONE) {
        distance = range;
    }
    return distance;
}
}  // namespace vl6180x