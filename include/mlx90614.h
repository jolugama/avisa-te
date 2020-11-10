// sensor de calor MLX90614ESF-BAA

#include <Adafruit_MLX90614.h>

namespace mlx90614 {
float temperature[2];
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
const float c = 5;  // constante para calibrar el sensor. hay que usar un termómetro y replicar temperatura.

// Arranca sensor
void setup() {
    Serial.println("Adafruit MLX90614 test");
    mlx.begin();
}

// Obtiene la temperatura del sensor: objeto y ambiente
float* getTemperature() {
    Serial.print("Ambient = ");
    Serial.print(mlx.readAmbientTempC() + c);
    Serial.print("*C\tObject = ");
    Serial.print(mlx.readObjectTempC() + c);
    Serial.println("*C");
    temperature[0] = mlx.readObjectTempC() + c;
    temperature[1] = mlx.readAmbientTempC() + c;
    return temperature;
}


// Toma temperatura del sensor, verificando si es caliente, óptima o demasiado fría.
void checkTemperature(bool setTemp, void (*callback)(EstadoTaza)) {
    if (setTemp == true) {
         Serial.println("Se toma temperatura real:");
        temperatureSensor = mlx90614::getTemperature();
    }

    if ((int)distance > proximityToBowlMin || (int)distance < 1) {
        Serial.println("lejos");
        callback(EstadoTaza::TAZA_LEJOS);
    } else if ((int)temperatureSensor[0] > optimalTemperature) {
        Serial.println("caliente");
        callback(EstadoTaza::TAZA_DEMASIADO_CALIENTE);
    } else if ((int)temperatureSensor[0] < coolTemperature) {
        Serial.println("fría");
        callback(EstadoTaza::TAZA_DEMASIADO_FRIA);
    } else {
        Serial.println("optima");
        callback(EstadoTaza::TAZA_TEMPERATURA_OPTIMA);
    }
}

}  // namespace mlx90614