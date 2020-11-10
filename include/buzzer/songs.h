// // Solution proposed by @TylerLewis:
// #define ARRAY_SIZE(x) sizeof(x) / sizeof(x[0])

#include "Arduino.h"
// #include "collections.h"
namespace songs {
int tempo = 170;

namespace _private {
void playMelody(int** melody) {
    int lengthMelody = (melody[1][0]) * 4;
    int _melody[lengthMelody];  // creo un array del tamaño del parámetro.
    memcpy(_melody, melody[0], lengthMelody);
    int wholenote = (60000 * 4) / tempo;
    int divider = 0, noteDuration = 0;
    digitalWrite(buzzerPin, HIGH);
    int notasTotal = lengthMelody;
    Serial.println(notasTotal);
    Serial.println("Empieza la canción:");
    for (int thisNote = 0; thisNote < notasTotal; thisNote = thisNote + 2) {
        if (_melody[thisNote] > 6000 || _melody[thisNote] < -6000) {
            break;  // si tiene un tono que no es el correcto
        }
        divider = _melody[thisNote + 1];
        if (divider > 0) {
            noteDuration = (wholenote) / divider;
        } else if (divider < 0) {
            noteDuration = (wholenote) / abs(divider);
            noteDuration *= 1.5;
        }
        Serial.println(_melody[thisNote]);
        tone(buzzerPin, _melody[thisNote], noteDuration * 0.9);
        delay(noteDuration);
        noTone(buzzerPin);
    }
    digitalWrite(buzzerPin, LOW);
}
}  // namespace _private

void play() {
    randomSeed(millis());
    int r = random(1, 15);
     Serial.print("Canción número: ");
    Serial.println(r, DEC);
    if (r == 1) {
        _private::playMelody(collectionSong::getZeldaTheme());
    } else if (r == 2) {
        _private::playMelody(collectionSong::getMinuetPetzold());
    } else if (r == 3) {
        _private::playMelody(collectionSong::getZeldaSonOfStorm());
    } else if (r == 4) {
        _private::playMelody(collectionSong::getGreenSleeves());
    } else if (r == 5) {
        _private::playMelody(collectionSong::getBeethovenSymphony9());
    } else if (r == 6) {
        _private::playMelody(collectionSong::getPachelbelsCanon());
    } else if (r == 7) {
        _private::playMelody(collectionSong::getBachBadinerie());
    } else if (r == 8) {
        _private::playMelody(collectionSong::getGodFather());
    } else if (r == 9) {
        _private::playMelody(collectionSong::getSuperMario());
    } else if (r == 10) {
        _private::playMelody(collectionSong::getGameOfThrones());
    }else if (r == 11) {
        _private::playMelody(collectionSong::getSonicGreenHill());
    }else if (r == 12) {
        _private::playMelody(collectionSong::getZeldasLullaby());
    }else if (r == 13) {
        _private::playMelody(collectionSong::getPinkPanther());
    }else if (r == 14) {
        _private::playMelody(collectionSong::getImperialMarch());
    }else if (r == 15) {
        _private::playMelody(collectionSong::getStarWars());
    }
}

}  // namespace songs