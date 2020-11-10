/**
ARDU-TEA
Mide la temperatura del té, constantemente, midiendo visualmente el calor
en la tira led, de rojo a verde. 
Si es la temperatura óptima, vibrará el buzzer
*/
#include <Arduino.h>
#include <Wire.h>  //I2c, para sensor calor
#include <limits.h>

// Verifica tipo microcontrolador
#ifdef ESP32
const String controlador = "ESP32";
#elif ESP8266
const String controlador = "ESP8266";
#else
const String controlador = "ARDUINO";
#endif

// DECLARA PINES
const byte buzzerPin = 13;
const byte ledRedPin = 14;
const byte ledGreenPin = 12;
const byte ledBluePin = 15;

// CONSTANTES. modificar al gusto.
const int interval = 60000;  // cada x se comprueba temperatura
const int interval2 = 500;   // cada x, intervalo de proximidad
const byte optimalTemperature = 53;
const byte coolTemperature = 40;
const byte brilloConst = 100;
const byte proximityToBowlMin = 20;

// variables
unsigned long previousMillis = 0;
unsigned long currentMillis;
unsigned long previousMillis2 = 0;
unsigned long currentMillis2;

// Enums
enum class EstadoTaza {
    TAZA_LEJOS,
    TAZA_DEMASIADO_FRIA,
    TAZA_DEMASIADO_CALIENTE,
    TAZA_TEMPERATURA_OPTIMA
};

int ledRedValue;
int ledGreenValue;
int ledBlueValue;
float *temperatureSensor;
long distance;
// long duration, distance;
bool hasSoundSong = false;

// notas
#include "pitches.h"

// canciones buzzer
#include "buzzer/collections.h"  // canciones
#include "buzzer/songs.h"        // manejador de canciones

// privadas
#include "mlx90614.h"
#include "vl6180x.h"

// utils
#include "utils.h"

void setup() {
    Serial.begin(9600);
    while (!Serial) {
        delay(1);
    }
    Serial.println("");
    Serial.println("Iniciando app");

    pinMode(ledRedPin, OUTPUT);
    pinMode(ledGreenPin, OUTPUT);
    pinMode(ledBluePin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);

    digitalWrite(buzzerPin, LOW);
    analogWrite(ledRedPin, 50);
    analogWrite(ledGreenPin, 50);
    analogWrite(ledBluePin, 150);

    mlx90614::setup();
    vl6180x::setup();
}

void loop() {
    currentMillis = millis();   // cada 30s, minuto o más, revisa la temperatura. Poner valor grande.
    currentMillis2 = millis();  // mucho más corta de tiempo, revisa la distancia de la taza, si es la correcta.

    // los primeros 10 segundos reviso cada segundo la temperatura. Tiempo para recolocar bien la taza
    // y que se ponga la luz roja en vez de la azul.
    if ((millis() < 8000) || ((currentMillis - previousMillis) > interval && (int)distance < proximityToBowlMin)) {
        delay(1000);
        mlx90614::checkTemperature(true, utils::watchEstateCup);
        previousMillis = currentMillis;
    }

    if ((currentMillis2 - previousMillis2) > interval2) {
        if (hasSoundSong) {
            utils::setDeepDreams();
        }
        distance = vl6180x::getDistance();
        // Serial.print("Distancia: ");
        // Serial.println(distance);

        mlx90614::checkTemperature(false, utils::watchEstateCup);
        previousMillis2 = currentMillis2;
    }
}
