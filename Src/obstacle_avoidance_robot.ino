#include <AFMotor.h>
#include <Servo.h>

#define Speed 180
#define Trig A0
#define Echo A1
#define StartPoint 90

int Distance, Left, Right;
int L = 0, R = 0;

Servo servo;

AF_DCMotor Motor1(1);
AF_DCMotor Motor2(2);
AF_DCMotor Motor3(3);
AF_DCMotor Motor4(4);
 
void setup() {
  pinMode(Trig, OUTPUT); pinMode(Echo, INPUT);
  servo.attach(10); start();
  Motor1.setSpeed(Speed); Motor2.setSpeed(Speed); Motor3.setSpeed(Speed); Motor4.setSpeed(Speed);
}
 
void loop() {
  Distance = ultrasonic();
  if (Distance <= 12) {
    Stop(); backward(); delay(100); Stop();
    L = leftsee(); servo.write(StartPoint); delay(800);
    R = rightsee(); servo.write(StartPoint);
    if (L < R) {
      turnleft(); delay(500); Stop(); delay(200);
    } else if (L > R) {
      turnright(); delay(500); Stop(); delay(200);
    }
  } else {
    forward();
  }
}
 
void forward() {
  Motor1.run(FORWARD); Motor2.run(FORWARD); Motor3.run(FORWARD); Motor4.run(FORWARD);
}

void backward() {
  Motor1.run(BACKWARD); Motor2.run(BACKWARD); Motor3.run(BACKWARD); Motor4.run(BACKWARD);
}

void turnleft() {
  Motor1.run(BACKWARD); Motor2.run(BACKWARD); Motor3.run(FORWARD); Motor4.run(FORWARD);
}

void turnright() {
  Motor1.run(FORWARD); Motor2.run(FORWARD); Motor3.run(BACKWARD); Motor4.run(BACKWARD);
}

void Stop() {
  Motor1.run(RELEASE); Motor2.run(RELEASE); Motor3.run(RELEASE); Motor4.run(RELEASE);
}

int leftsee() {
  servo.write(20); delay(800);
  Left = ultrasonic(); return Left;
}
 
int rightsee() {
  servo.write(150); delay(800);
  Right = ultrasonic(); return Right;
}
 
int ultrasonic() {
  digitalWrite(Trig, LOW); delayMicroseconds(4);
  digitalWrite(Trig, HIGH); delayMicroseconds(10); 
  digitalWrite(Trig, LOW);
  long t = pulseIn(Echo, HIGH); long cm = t / 29 / 2; return cm;
}

void start() {
  delay(3000);
  for (int a = 0; a < 4; a++) {
    servo.write(StartPoint); delay(50);
    servo.write(40); delay(50);
    servo.write(90); delay(50);
    servo.write(StartPoint);
  }
}
