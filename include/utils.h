namespace utils {

// namespace _private {

// }


void setDeepDreams() {
    // ha sonado ya la canción, por lo que hago que duerma.
    if (controlador == "ESP32" || controlador == "ESP8266") {
        Serial.println("micro-controlador ESP");
        // ESP.deepSleep(ULONG_MAX, WAKE_RF_DEFAULT);
        // ESP.deepSleep(ULONG_MAX, WAKE_RF_DISABLED);
        Serial.println("Entrando en un profuuuuuuundo sueño");
        ESP.deepSleep(ESP.deepSleepMax(), WAKE_RF_DISABLED);

    } else {
        Serial.println("micro-controlador Arduino");
        Serial.println("Delay activado");
        delay(ULONG_MAX);
    }
}

// según el estado de la taza, el led toma un color
// si es óptima, suena música y entra en profundo sueño
void watchEstateCup(EstadoTaza estado) {
    // Serial.println((String)estado);
    if (estado == EstadoTaza::TAZA_LEJOS) {
        ledRedValue = 0;
        ledGreenValue = 0;
        ledBlueValue = 80;
    } else if (estado == EstadoTaza::TAZA_DEMASIADO_FRIA) {
        ledRedValue = 0;
        ledGreenValue = 0;
        ledBlueValue = 250;
    } else if (estado == EstadoTaza::TAZA_DEMASIADO_CALIENTE) {
        ledRedValue = 250;
        ledGreenValue = 0;
        ledBlueValue = 0;
    } else if (estado == EstadoTaza::TAZA_TEMPERATURA_OPTIMA) {
        // por lo menos tiene que pasar 3 minutos hasta que se enfríe.
        if (hasSoundSong == false && millis() > 180000) {
            ledRedValue = 0;
            ledGreenValue = 250;
            ledBlueValue = 0;
            analogWrite(ledRedPin, ledRedValue);
            analogWrite(ledGreenPin, ledGreenValue);
            analogWrite(ledBluePin, ledBlueValue);
            songs::play();
            hasSoundSong = true;
        }
    }

    analogWrite(ledRedPin, ledRedValue);
    analogWrite(ledGreenPin, ledGreenValue);
    analogWrite(ledBluePin, ledBlueValue);
}

}  // namespace utils
