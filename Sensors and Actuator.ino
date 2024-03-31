// C++ code
//
#include <Servo.h>

int output = 0;

int sensor_value = 0;

Servo servo_5;

void setup()
{
  pinMode(A0, INPUT);
  servo_5.attach(5, 500, 2500);
  Serial.begin(9600);
}

void loop()
{
  sensor_value = analogRead(A0);
  output = map(sensor_value, 0, 1023, 0, 180);
  servo_5.write(output);
  Serial.println(output);
  delay(10); // Delay a little bit to improve simulation performance
}