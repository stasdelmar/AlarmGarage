#include <Arduino.h>
#include ""
#define SHS1 3 //Шина сигнализации 1
#define SHS2 4 //Шина сигнализации 2
#define SHS3 5 //Шина сигнализации 3
#define SHS4 6 //Шина сигнализации 4

#define iButton 7 // Dallas iButton DS1990
#define AlarmLight 8 // На реле Световой индикатор сигнализации
#define AlarmSound 9 // На реле Звуковой индикатор сигнализации (Сирена)


bool    isAlarmSoundTrig = false, //Включена Сирена
        isAlarmLightTrig = false, //Включена световая сигнализация
        isOnSecurityState = false, //Объект под охраной
        isSHS1High = 0,
        isSHS2High = 0;
byte KeyAddr[8] = {0x1, 0x1F, 0x45, 0xA7, 0xF, 0x0, 0x0, 0x9};


void setup() {

}

void loop() {

}
void Alarm (){ //TODO: взять на охрану снять с охраны

}
bool validKey(KeyAddr){
    // TODO Ключ не инвалид

    return true;
}
// TODO: Слать SMS по событиям
// TODO: Читать TouchMemory

//f
