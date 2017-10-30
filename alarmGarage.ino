#include <OneWire.h>
#define SHS1 3 //Шина сигнализации 1
#define SHS2 4 //Шина сигнализации 2
#define SHS3 5 //Шина сигнализации 3
#define SHS4 6 //Шина сигнализации 4

#define iButton 10 // Dallas iButton DS1990
#define AlarmLight 8 // На реле Световой индикатор сигнализации
#define AlarmSound 9 // На реле Звуковой индикатор сигнализации (Сирена)

OneWire ds(10);

boolean isAlarmSoundTrig = false, //Включена Сирена
        isAlarmLightTrig = false, //Включена световая сигнализация
        isOnSecurityState = false, //Объект под охраной
        isSHS1High = 0,
        isSHS2High = 0;
byte KeyAddr[8] = {0x1, 0x1F, 0x45, 0xA7, 0xF, 0x0, 0x0, 0x9}; // Ключ
byte Addr[8];

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (ds.search(Addr)){
    if (isValidKey(Addr)){
      Serial.println("TotKey");
      //TODO Снять c охраны ИЛИ Поставить на охрану.
      
    }else {
      Serial.println ("NeTotKey");
      }
  }
}
boolean isAlarm (){ //TODO: взять на охрану снять с охраны

}

boolean isValidKey(byte Key[8]){ //проверяем улюч по базе
  bool match = true;
  for (int i=1;i<8;i++){
    if (Key[i] != KeyAddr[i]){
      match = false;
    }
  }
  if (match) delay (500);
  delay (250);
  return match;
}
// TODO: Слать SMS по событиям
// TODO: Читать TouchMemory
