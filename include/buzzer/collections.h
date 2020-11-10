// Solution proposed by @TylerLewis:
#define ARRAY_SIZE(x) sizeof(x) / sizeof(x[0])

namespace collectionSong {


int** getZeldaTheme() {
    static int zeldaTheme[] = {
        NOTE_AS4, 4, NOTE_F4, -4, NOTE_AS4, 8, NOTE_AS4, 16, NOTE_C5, 16, NOTE_D5, 16, NOTE_DS5, 16,
        NOTE_F5, 2, NOTE_F5, 8, NOTE_F5, 8, NOTE_F5, 8, NOTE_FS5, 16, NOTE_GS5, 16,
        NOTE_AS5, -2, NOTE_AS5, 8, NOTE_AS5, 8, NOTE_GS5, 8, NOTE_FS5, 16,
        NOTE_GS5, -8, NOTE_FS5, 16, NOTE_F5, 2, NOTE_F5, 4,
        NOTE_DS5, -8, NOTE_F5, 16, NOTE_FS5, 2, NOTE_F5, 8, NOTE_DS5, 8,
        NOTE_CS5, -8, NOTE_DS5, 16, NOTE_F5, 2, NOTE_DS5, 8, NOTE_CS5, 8,
        NOTE_C5, -8, NOTE_D5, 16, NOTE_E5, 2, NOTE_G5, 8,
        NOTE_F5, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 8, NOTE_F4, 16, NOTE_F4, 4};
    static int size[] = {ARRAY_SIZE(zeldaTheme)};
    static int* result[] = {zeldaTheme, size};
    return result;
}

// int* getZeldaTheme() {

//     return zeldaTheme;
// }

int** getGodFather() {
    static int godFather[] = {
        REST, 4, REST, 8, REST, 8, REST, 8, NOTE_E4, 8, NOTE_A4, 8, NOTE_C5, 8,
        NOTE_B4, 8, NOTE_A4, 8, NOTE_C5, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_F4, 8, NOTE_G4, 8,
        NOTE_E4, 2, NOTE_E4, 8, NOTE_A4, 8, NOTE_C5, 8,
        NOTE_B4, 8, NOTE_A4, 8, NOTE_C5, 8, NOTE_A4, 8, NOTE_C5, 8, NOTE_A4, 8, NOTE_E4, 8, NOTE_DS4, 8,
        NOTE_D4, 2, NOTE_D4, 8, NOTE_F4, 8, NOTE_GS4, 8,
        NOTE_B4, 2, NOTE_D4, 8, NOTE_F4, 8, NOTE_GS4, 8,
        NOTE_A4, 2, NOTE_C4, 8, NOTE_C4, 8, NOTE_G4, 8,
        NOTE_F4, 8, NOTE_E4, 8, NOTE_G4, 8, NOTE_F4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_E4, 8, NOTE_GS4, 8, NOTE_A4, 2};
    static int size[] = {ARRAY_SIZE(godFather)};
    static int* result[] = {godFather, size};
    return result;
}

int** getSuperMario() {
    static int superMario[] = {
        NOTE_E5, 8, NOTE_E5, 8, REST, 8, NOTE_E5, 8, REST, 8, NOTE_C5, 8, NOTE_E5, 8,
        NOTE_G5, 4, REST, 4, NOTE_G4, 8, REST, 4,
        NOTE_C5, -4, NOTE_G4, 8, REST, 4, NOTE_E4, -4,
        NOTE_A4, 4, NOTE_B4, 4, NOTE_AS4, 8, NOTE_A4, 4,
        NOTE_G4, -8, NOTE_E5, -8, NOTE_G5, -8, NOTE_A5, 4, NOTE_F5, 8, NOTE_G5, 8,
        REST, 8, NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, -4,
        NOTE_C5, -4, NOTE_G4, 8, REST, 4, NOTE_E4, -4,
        NOTE_A4, 4, NOTE_B4, 4, NOTE_AS4, 8, NOTE_A4, 4,
        NOTE_G4, -8, NOTE_E5, -8, NOTE_G5, -8, NOTE_A5, 4, NOTE_F5, 8, NOTE_G5, 8,
        REST, 8, NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, -4, NOTE_E5, 6};
    static int size[] = {ARRAY_SIZE(superMario)};
    static int* result[] = {superMario, size};
    return result;
}

int** getGameOfThrones() {
    static int gameOfThrones[] = {
        NOTE_G4, -4, NOTE_C4, -4,                                                      //5
        NOTE_DS4, 16, NOTE_F4, 16, NOTE_G4, 4, NOTE_C4, 4, NOTE_DS4, 16, NOTE_F4, 16,  //6
        NOTE_D4, -1,                                                                   //7 and 8
        NOTE_F4, -4, NOTE_AS3, -4,
        NOTE_DS4, 16, NOTE_D4, 16, NOTE_F4, 4, NOTE_AS3, -4,
        NOTE_DS4, 16, NOTE_D4, 16, NOTE_C4, -1,  //11 and 12
        NOTE_G4, -4, NOTE_C4, -4,
        NOTE_DS4, 16, NOTE_F4, 16, NOTE_G4, 4, NOTE_C4, 4, NOTE_DS4, 16, NOTE_F4, 16,
        NOTE_D4, -2,  //15
        NOTE_F4, -4, NOTE_AS3, -4, NOTE_D4, -8, NOTE_DS4, -8, NOTE_D4, -8, NOTE_AS3, -8,
        NOTE_C4, -1, NOTE_C5, -2, NOTE_AS4, -2, NOTE_C4, -2,
        NOTE_G4, -2, NOTE_DS4, -2, NOTE_DS4, -4, NOTE_F4, -4, NOTE_G4, -1, NOTE_C5, -2, NOTE_AS4, -2, NOTE_C4, -2, NOTE_G4, -2, NOTE_DS4, -2,
        NOTE_DS4, -4, NOTE_D4, -4,
        NOTE_C5, 8, NOTE_G4, 8, NOTE_GS4, 16, NOTE_AS4, 16, NOTE_C5, 8, NOTE_G4, 8, NOTE_GS4, 16, NOTE_AS4, 16,
        NOTE_C5, 8, NOTE_G4, 8, NOTE_GS4, 16, NOTE_AS4, 16, NOTE_C5, 8, NOTE_G4, 8, NOTE_GS4, 16, NOTE_AS4, 16,
        REST, 4, NOTE_GS5, 16, NOTE_AS5, 16, NOTE_C6, 8, NOTE_G5, 8, NOTE_GS5, 16, NOTE_AS5, 16,
        NOTE_C6, 8, NOTE_G5, 16, NOTE_GS5, 16, NOTE_AS5, 16, NOTE_C6, 8, NOTE_G5, 8, NOTE_GS5, 16, NOTE_AS5, 16};
    static int size[] = {ARRAY_SIZE(gameOfThrones)};
    static int* result[] = {gameOfThrones, size};
    return result;
}

int** getIndianaJones() {
    static int indianaJones[] = {
        NOTE_E5, -8, NOTE_F5, -8, NOTE_G5, 4, NOTE_C6, 2, REST, 16,
        NOTE_D5, -8, NOTE_E5, -8, NOTE_F5, 4, REST, 4, REST, 16,
        NOTE_G5, -8, NOTE_A5, -8, NOTE_B5, 4, NOTE_F6, 2, REST, 16,
        NOTE_A5, -8, NOTE_B5, -8, NOTE_C6, 4, NOTE_D6, 4, NOTE_E6, 4, REST, 16,
        NOTE_E5, -8, NOTE_F5, -8, NOTE_G5, 4, NOTE_C6, 2, REST, 16,
        NOTE_D6, 4, NOTE_E6, -8, NOTE_F6, -4, REST, 16,
        NOTE_G5, 4, NOTE_G5, -8, NOTE_E6, -8, NOTE_D6, 4, NOTE_G5, 4,
        NOTE_E6, -8, NOTE_D6, -8, NOTE_G5, 4, REST, 16,
        NOTE_E6, -8, NOTE_D6, -8, NOTE_G5, 4, REST, 16,
        NOTE_F6, 2, NOTE_E6, -8, NOTE_D6, -4, NOTE_C6, 1};
    static int size[] = {ARRAY_SIZE(indianaJones)};
    static int* result[] = {indianaJones, size};
    return result;
}

int** getStarWars() {
    static int starWars[] = {
        NOTE_AS4, 8, NOTE_AS4, 8, NOTE_AS4, 8,  //1
        NOTE_F5, 2, NOTE_C6, 2,
        NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F6, 2, NOTE_C6, 4,
        NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F6, 2, NOTE_C6, 4,
        NOTE_AS5, 8, NOTE_A5, 8, NOTE_AS5, 8, NOTE_G5, 2, NOTE_C5, 8, NOTE_C5, 8, NOTE_C5, 8,
        NOTE_F5, 2, NOTE_C6, 2,
        NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F6, 2, NOTE_C6, 4,

        NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F6, 2, NOTE_C6, 4,  //8
        NOTE_AS5, 8, NOTE_A5, 8, NOTE_AS5, 8, NOTE_G5, 2, NOTE_C5, -8, NOTE_C5, 16,
        NOTE_D5, -4, NOTE_D5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
        NOTE_F5, 8, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 4, NOTE_D5, 8, NOTE_E5, 4, NOTE_C5, -8, NOTE_C5, 16,
        NOTE_D5, -4, NOTE_D5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,

        NOTE_C6, -8, NOTE_G5, 16, NOTE_G5, 2, REST, 8, NOTE_C5, 8,  //13
        NOTE_D5, -4, NOTE_D5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
        NOTE_F5, 8, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 4, NOTE_D5, 8, NOTE_E5, 4, NOTE_C6, -8, NOTE_C6, 16,
        NOTE_F6, 4, NOTE_DS6, 8, NOTE_CS6, 4, NOTE_C6, 8, NOTE_AS5, 4, NOTE_GS5, 8, NOTE_G5, 4, NOTE_F5, 8,
        NOTE_C6, 1};
    static int size[] = {ARRAY_SIZE(starWars)};
    static int* result[] = {starWars, size};
    return result;
}

int** getImperialMarch() {
    static int imperialMarch[] = {
        NOTE_A4, 4, NOTE_A4, 4, NOTE_A4, 4, NOTE_F4, -8, NOTE_C5, 16,
        NOTE_A4, 4, NOTE_F4, -8, NOTE_C5, 16, NOTE_A4, 2,  //4
        NOTE_E5, 4, NOTE_E5, 4, NOTE_E5, 4, NOTE_F5, -8, NOTE_C5, 16,
        NOTE_A4, 4, NOTE_F4, -8, NOTE_C5, 16, NOTE_A4, 2,
        NOTE_A5, 4, NOTE_A4, -8, NOTE_A4, 16, NOTE_A5, 4, NOTE_GS5, -8, NOTE_G5, 16,
        NOTE_DS5, 16, NOTE_D5, 16, NOTE_DS5, 8, REST, 8, NOTE_A4, 8, NOTE_DS5, 4, NOTE_D5, -8, NOTE_CS5, 16,
        NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 16, REST, 8, NOTE_F4, 8, NOTE_GS4, 4, NOTE_F4, -8, NOTE_A4, -16,
        NOTE_C5, 4, NOTE_A4, -8, NOTE_C5, 16, NOTE_E5, 2,
        NOTE_A5, 4, NOTE_A4, -8, NOTE_A4, 16, NOTE_A5, 4, NOTE_GS5, -8, NOTE_G5, 16,
        NOTE_DS5, 16, NOTE_D5, 16, NOTE_DS5, 8, REST, 8, NOTE_A4, 8, NOTE_DS5, 4, NOTE_D5, -8, NOTE_CS5, 16,
        NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 16, REST, 8, NOTE_F4, 8, NOTE_GS4, 4, NOTE_F4, -8, NOTE_A4, -16,
        NOTE_A4, 4, NOTE_F4, -8, NOTE_C5, 16, NOTE_A4, 2};
    static int size[] = {ARRAY_SIZE(imperialMarch)};
    static int* result[] = {imperialMarch, size};
    return result;
}

// int harryPotter [] = {
//   REST, 2, NOTE_D4, 4,
//   NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
//   NOTE_G4, 2, NOTE_D5, 4,
//   NOTE_C5, -2,
//   NOTE_A4, -2,
//   NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
//   NOTE_F4, 2, NOTE_GS4, 4,
//   NOTE_D4, -1,
//   NOTE_D4, 4,

//   NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4, //10
//   NOTE_G4, 2, NOTE_D5, 4,
//   NOTE_F5, 2, NOTE_E5, 4,
//   NOTE_DS5, 2, NOTE_B4, 4,
//   NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
//   NOTE_CS4, 2, NOTE_B4, 4,
//   NOTE_G4, -1,
// };

int** getPinkPanther() {
    static int pinkPanther[] = {
        REST, 2, REST, 4, REST, 8, NOTE_DS4, 8,
        NOTE_E4, -4, REST, 8, NOTE_FS4, 8, NOTE_G4, -4, REST, 8, NOTE_DS4, 8,
        NOTE_E4, -8, NOTE_FS4, 8, NOTE_G4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_E4, 8, NOTE_G4, -8, NOTE_B4, 8,
        NOTE_AS4, 2, NOTE_A4, -16, NOTE_G4, -16, NOTE_E4, -16, NOTE_D4, -16,
        NOTE_E4, 2, REST, 4, REST, 8,
        NOTE_DS4, 4, NOTE_E4, -4, REST, 8, NOTE_FS4, 8, NOTE_G4, -4, REST, 8, NOTE_DS4, 8,
        NOTE_E4, -8, NOTE_FS4, 8, NOTE_G4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_G4, 8, NOTE_B4, -8, NOTE_E5, 8,
        NOTE_D5, 2, REST, 4, REST, 8, NOTE_DS4, 8,
        NOTE_E4, -4, REST, 8, NOTE_FS4, 8, NOTE_G4, -4, REST, 8, NOTE_DS4, 8,
        NOTE_E4, -8, NOTE_FS4, 8, NOTE_G4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_E4, 8, NOTE_G4, -8, NOTE_B4, 8,
        NOTE_AS4, 2, NOTE_A4, -16, NOTE_G4, -16, NOTE_E4, -16, NOTE_D4, -16,
        NOTE_E4, -4, REST, 4,
        REST, 4, NOTE_E5, -8, NOTE_D5, 8, NOTE_B4, -8, NOTE_A4, 8, NOTE_G4, -8, NOTE_E4, -8,
        NOTE_AS4, 16, NOTE_A4, -8, NOTE_AS4, 16, NOTE_A4, -8, NOTE_AS4, 16, NOTE_A4, -8, NOTE_AS4, 16, NOTE_A4, -8,
        NOTE_G4, -16, NOTE_E4, -16, NOTE_D4, -16, NOTE_E4, 16, NOTE_E4, 16, NOTE_E4, 2};
    static int size[] = {ARRAY_SIZE(pinkPanther)};
    static int* result[] = {pinkPanther, size};
    return result;
}

int** getZeldaSonOfStorm() {
    static int zeldaSonOfStorm[] = {
        NOTE_D4, 4, NOTE_A4, 4, NOTE_A4, 4,
        REST, 8, NOTE_E4, 8, NOTE_B4, 2,
        NOTE_F4, 4, NOTE_C5, 4, NOTE_C5, 4,
        REST, 8, NOTE_E4, 8, NOTE_B4, 2,
        NOTE_D4, 4, NOTE_A4, 4, NOTE_A4, 4,
        REST, 8, NOTE_E4, 8, NOTE_B4, 2,
        NOTE_F4, 4, NOTE_C5, 4, NOTE_C5, 4,
        REST, 8, NOTE_E4, 8, NOTE_B4, 2,
        NOTE_D4, 8, NOTE_F4, 8, NOTE_D5, 2,

        NOTE_D4, 8, NOTE_F4, 8, NOTE_D5, 2,
        NOTE_E5, -4, NOTE_F5, 8, NOTE_E5, 8, NOTE_E5, 8,
        NOTE_E5, 8, NOTE_C5, 8, NOTE_A4, 2,
        NOTE_A4, 4, NOTE_D4, 4, NOTE_F4, 8, NOTE_G4, 8,
        NOTE_A4, -2,
        NOTE_A4, 4, NOTE_D4, 4, NOTE_F4, 8, NOTE_G4, 8,
        NOTE_E4, -2,
        NOTE_D4, 8, NOTE_F4, 8, NOTE_D5, 2,
        NOTE_D4, 8, NOTE_F4, 8, NOTE_D5, 2,

        NOTE_E5, -4, NOTE_F5, 8, NOTE_E5, 8, NOTE_E5, 8,
        NOTE_E5, 8, NOTE_C5, 8, NOTE_A4, 2,
        NOTE_A4, 4, NOTE_D4, 4, NOTE_F4, 8, NOTE_G4, 8,
        NOTE_A4, 2, NOTE_A4, 4,
        NOTE_D4, 1};
    static int size[] = {ARRAY_SIZE(zeldaSonOfStorm)};
    static int* result[] = {zeldaSonOfStorm, size};
    return result;
}

int** getZeldasLullaby() {
    static int zeldasLullaby[] = {
        NOTE_E4, 2, NOTE_G4, 4,
        NOTE_D4, 2, NOTE_C4, 8, NOTE_D4, 8,
        NOTE_E4, 2, NOTE_G4, 4,
        NOTE_D4, -2,
        NOTE_E4, 2, NOTE_G4, 4,
        NOTE_D5, 2, NOTE_C5, 4,
        NOTE_G4, 2, NOTE_F4, 8, NOTE_E4, 8,
        NOTE_D4, -2,
        NOTE_E4, 2, NOTE_G4, 4,
        NOTE_D4, 2, NOTE_C4, 8, NOTE_D4, 8,
        NOTE_E4, 2, NOTE_G4, 4,
        NOTE_D4, -2,
        NOTE_E4, 2, NOTE_G4, 4,
        NOTE_D5, 2, NOTE_C5, 4,
        NOTE_G4, 2, NOTE_F4, 8, NOTE_E4, 8,
        NOTE_F4, 8, NOTE_E4, 8, NOTE_C4, 2,
        NOTE_F4, 2, NOTE_E4, 8, NOTE_D4, 8,
        NOTE_E4, 8, NOTE_D4, 8, NOTE_A3, 2,
        NOTE_G4, 2, NOTE_F4, 8, NOTE_E4, 8,
        NOTE_F4, 8, NOTE_E4, 8, NOTE_C4, 4, NOTE_F4, 4,
        NOTE_C5, -2};
    static int size[] = {ARRAY_SIZE(zeldasLullaby)};
    static int* result[] = {zeldasLullaby, size};
    return result;
}

int** getSonicGreenHill() {
    static int sonicGreenHill[] = {
        REST, 2, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8,
        NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
        REST, 8, NOTE_A4, 8, NOTE_FS5, 8, NOTE_E5, 4, NOTE_D5, 8,
        NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
        REST, 4, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8,
        NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
        REST, 8, NOTE_B4, 8, NOTE_B4, 8, NOTE_G4, 4, NOTE_B4, 8,
        NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 4, NOTE_D4, 2,
        REST, 4, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8,
        NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
        REST, 8, NOTE_A4, 8, NOTE_FS5, 8, NOTE_E5, 4, NOTE_D5, 8,
        NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2};
    static int size[] = {ARRAY_SIZE(sonicGreenHill)};
    static int* result[] = {sonicGreenHill, size};
    return result;
}

int** getBeethovenSymphony9() {
    static int beethovenSymphony9[] = {
        NOTE_E4, 4, NOTE_E4, 4, NOTE_F4, 4, NOTE_G4, 4,
        NOTE_G4, 4, NOTE_F4, 4, NOTE_E4, 4, NOTE_D4, 4,
        NOTE_C4, 4, NOTE_C4, 4, NOTE_D4, 4, NOTE_E4, 4,
        NOTE_E4, -4, NOTE_D4, 8, NOTE_D4, 2,
        NOTE_E4, 4, NOTE_E4, 4, NOTE_F4, 4, NOTE_G4, 4,
        NOTE_G4, 4, NOTE_F4, 4, NOTE_E4, 4, NOTE_D4, 4,
        NOTE_C4, 4, NOTE_C4, 4, NOTE_D4, 4, NOTE_E4, 4,
        NOTE_D4, -4, NOTE_C4, 8, NOTE_C4, 2,
        NOTE_D4, 4, NOTE_D4, 4, NOTE_E4, 4, NOTE_C4, 4,
        NOTE_D4, 4, NOTE_E4, 8, NOTE_F4, 8, NOTE_E4, 4, NOTE_C4, 4,
        NOTE_D4, 4, NOTE_E4, 8, NOTE_F4, 8, NOTE_E4, 4, NOTE_D4, 4,
        NOTE_C4, 4, NOTE_D4, 4, NOTE_G3, 2,
        NOTE_E4, 4, NOTE_E4, 4, NOTE_F4, 4, NOTE_G4, 4,
        NOTE_G4, 4, NOTE_F4, 4, NOTE_E4, 4, NOTE_D4, 4,
        NOTE_C4, 4, NOTE_C4, 4, NOTE_D4, 4, NOTE_E4, 4,
        NOTE_D4, -4, NOTE_C4, 8, NOTE_C4, 2};
    static int size[] = {ARRAY_SIZE(beethovenSymphony9)};
    static int* result[] = {beethovenSymphony9, size};
    return result;
}

int** getMinuetPetzold() {
    static int minuetPetzold[] = {
        NOTE_D5, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_FS5, 8,
        NOTE_G5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_C5, 4, NOTE_D5, 8, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8,
        NOTE_B4, 4, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8,
        NOTE_FS4, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_G4, 8,
        NOTE_A4, -2,
        NOTE_D5, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_FS5, 8,
        NOTE_G5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_C5, 4, NOTE_D5, 8, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8,
        NOTE_B4, 4, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8,
        NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8,
        NOTE_G4, -2};
    static int size[] = {ARRAY_SIZE(minuetPetzold)};
    static int* result[] = {minuetPetzold, size};
    return result;
}

int** getGreenSleeves() {
    static int greenSleeves[] = {
        NOTE_G4, 8,
        NOTE_AS4, 4, NOTE_C5, 8, NOTE_D5, -8, NOTE_DS5, 16, NOTE_D5, 8,
        NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,
        NOTE_AS4, 4, NOTE_G4, 8, NOTE_G4, -8, NOTE_FS4, 16, NOTE_G4, 8,
        NOTE_A4, 4, NOTE_FS4, 8, NOTE_D4, 4, NOTE_G4, 8,
        NOTE_AS4, 4, NOTE_C5, 8, NOTE_D5, -8, NOTE_DS5, 16, NOTE_D5, 8,
        NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,
        NOTE_AS4, -8, NOTE_A4, 16, NOTE_G4, 8, NOTE_FS4, -8, NOTE_E4, 16, NOTE_FS4, 8,
        NOTE_G4, -2,
        NOTE_F5, 2, NOTE_E5, 16, NOTE_D5, 8,
        NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,
        NOTE_AS4, 4, NOTE_G4, 8, NOTE_G4, -8, NOTE_FS4, 16, NOTE_G4, 8,
        NOTE_A4, 4, NOTE_FS4, 8, NOTE_D4, 04,
        NOTE_F5, 2, NOTE_E5, 16, NOTE_D5, 8,
        NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,
        NOTE_AS4, -8, NOTE_A4, 16, NOTE_G4, 8, NOTE_FS4, -8, NOTE_E4, 16, NOTE_FS4, 8,
        NOTE_G4, -2};
    static int size[] = {ARRAY_SIZE(greenSleeves)};
    static int* result[] = {greenSleeves, size};
    return result;
}

int** getPachelbelsCanon() {
    static int pachelbelsCanon[] = {
        NOTE_D4, 4, NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_FS4, 8, NOTE_G4, 8,
        NOTE_A4, 4, NOTE_B3, 8, NOTE_CS4, 8, NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, 8, NOTE_G4, 8,
        NOTE_FS4, 4, NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, 4, NOTE_FS3, 8, NOTE_G3, 8,
        NOTE_A3, 8, NOTE_G3, 8, NOTE_FS3, 8, NOTE_G3, 8, NOTE_A3, 2,
        NOTE_G3, 4, NOTE_B3, 8, NOTE_A3, 8, NOTE_G3, 4, NOTE_FS3, 8, NOTE_E3, 8,
        NOTE_FS3, 4, NOTE_D3, 8, NOTE_E3, 8, NOTE_FS3, 8, NOTE_G3, 8, NOTE_A3, 8, NOTE_B3, 8,
        NOTE_G3, 4, NOTE_B3, 8, NOTE_A3, 8, NOTE_B3, 4, NOTE_CS4, 8, NOTE_D4, 8,
        NOTE_A3, 8, NOTE_B3, 8, NOTE_CS4, 8, NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 2};
    static int size[] = {ARRAY_SIZE(pachelbelsCanon)};
    static int* result[] = {pachelbelsCanon, size};
    return result;
}

int** getBachBadinerie() {
    static int bachBadinerie[] = {
        NOTE_B5, -8, NOTE_D6, 16, NOTE_B5, 16,
        NOTE_FS5, -8, NOTE_B5, 16, NOTE_FS5, 16, NOTE_D5, -8, NOTE_FS5, 16, NOTE_D5, 16,
        NOTE_B4, 4, NOTE_F4, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_B4, 16,
        NOTE_CS5, 16, NOTE_B4, 16, NOTE_CS5, 16, NOTE_B4, 16, NOTE_AS4, 16, NOTE_CS5, 16, NOTE_E5, 16, NOTE_CS5, 16,
        NOTE_D5, 8, NOTE_B4, 8, NOTE_B5, -8, NOTE_D6, 16, NOTE_B5, 16,
        NOTE_FS5, -8, NOTE_B5, 16, NOTE_FS5, 16, NOTE_D5, -8, NOTE_FS5, 16, NOTE_D5, 16,
        NOTE_B4, 4, NOTE_D5, 16, NOTE_CS5, -16, NOTE_D5, -8,
        NOTE_D5, 16, NOTE_CS5, -16, NOTE_D5, -8, NOTE_B5, -8, NOTE_D5, -8,
        NOTE_D5, 8, NOTE_CS5, -8, NOTE_FS5, -16, NOTE_F5, 16, NOTE_FS5, -8,
        NOTE_FS5, -16, NOTE_F5, 16, NOTE_FS5, -8, NOTE_D6, -8, NOTE_FS5, -8,
        NOTE_FS5, 8, NOTE_F5, 8, NOTE_CS5, 16, NOTE_FS5, 16, NOTE_A5, 16, NOTE_FS5, 16,
        NOTE_GS5, 16, NOTE_FS5, 16, NOTE_GS5, 16, NOTE_FS5, 16, NOTE_F5, 16, NOTE_G5, 16, NOTE_B5, 16, NOTE_G5, 16,
        NOTE_A5, 16, NOTE_GS5, 16, NOTE_A5, 16, NOTE_G5, 16, NOTE_F5, 16, NOTE_A5, 16, NOTE_FS5, 16, NOTE_F5, 16,
        NOTE_FS5, 16, NOTE_B5, 16, NOTE_FS5, 16, NOTE_F5, 16, NOTE_FS5, 16, NOTE_C6, 16, NOTE_FS5, 16, NOTE_E5, 16,
        NOTE_FS5, 16, NOTE_D6, 16, NOTE_FS5, 16, NOTE_F5, 16, NOTE_FS5, 16, NOTE_D6, 16, NOTE_C6, 16, NOTE_B5, 16,
        NOTE_C6, 16, NOTE_A5, 16, NOTE_GS5, 16, NOTE_FS5, 16, NOTE_A5, 8, NOTE_G5, 8,
        NOTE_FS5, 4, REST, 4, NOTE_FS5, -8};
    static int size[] = {ARRAY_SIZE(bachBadinerie)};
    static int* result[] = {bachBadinerie, size};
    return result;
}
}  // namespace collectionSong