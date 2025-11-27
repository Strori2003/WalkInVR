#include <Servo.h> // подключаем библиотеку для работы с сервоприводом

Servo servo1; // объявляем переменную servo типа "servo1"
Servo servo2; 
int pos = 0;
int speed;

void setup() {
   servo1.attach(10); // 
      servo2.attach(11); // 

  // pos = map(speed, -100,100,0,180);
   servo1.write(pos); // number 0-180 for motor SPEED
      servo2.write(pos); // number 0-180 for motor SPEED

   //0: full speed clockwise
   //90: stopped
   //180: full speed counter-clockwise
}

void loop() {
   servo1.write(0);
      servo2.write(180);

}