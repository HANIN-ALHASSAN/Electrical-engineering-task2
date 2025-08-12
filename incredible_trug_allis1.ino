#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0;

void setup() {
  servo1.attach(9);   // السيرفو الأول على المنفذ 9
  servo2.attach(10);  // السيرفو الثاني على المنفذ 10
  servo3.attach(11);  // السيرفو الثالث على المنفذ 11
  servo4.attach(6);   // السيرفو الرابع على المنفذ 6
}

void loop() {
  unsigned long startTime = millis(); // وقت بداية الحركة

  // شغّل حركة sweep لمدة ثانيتين فقط
  while (millis() - startTime < 2000) {
    for (pos = 0; pos <= 180; pos += 1) {
      setAllServos(pos);
      delay(15);
    }
    for (pos = 180; pos >= 0; pos -= 1) {
      setAllServos(pos);
      delay(15);
    }
  }

  // بعد انتهاء الحركة ثبت كل السيرفو على 90°
  setAllServos(90);

  while (true) {
    // توقف نهائي (السيرفو ثابتة على 90°)
  }
}

// دالة لتغيير كل السيرفو لنفس الزاوية
void setAllServos(int angle) {
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
}