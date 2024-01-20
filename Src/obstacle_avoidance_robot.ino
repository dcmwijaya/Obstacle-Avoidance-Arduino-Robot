// library declaration
#include <AFMotor.h> // calling AFMotor library
#include <Servo.h> // calling Servo library

// define constants
#define Speed 180 // motor speed: 180
#define Trig A0 // trigger set on A0 pin
#define Echo A1 // echo set on A1 pin
#define StartPoint 90 // starting position on servo motor: 90

// define variables
int Distance, Left, Right; // variable used to store ultrasonic sensor data
int L = 0, R = 0; // default value: 0

// constructor initialization
Servo servo; // defines the nickname from Servo class object
AF_DCMotor Motor1(1); // defines the nickname from AF_DCMotor class object for Motor1
AF_DCMotor Motor2(2); // defines the nickname from AF_DCMotor class object for Motor2
AF_DCMotor Motor3(3); // defines the nickname from AF_DCMotor class object for Motor3
AF_DCMotor Motor4(4); // defines the nickname from AF_DCMotor class object for Motor4

// setup method
void setup(){
  pinMode(Trig, OUTPUT); // trig pin is used as output to generate ultrasonic signal
  pinMode(Echo, INPUT); // echo pin is used as an output to receive the ultrasonic reflected signal
  servo.attach(10); // initialize D10 pin as servo signal
  start(); // calling start method
  Motor1.setSpeed(Speed); Motor2.setSpeed(Speed); Motor3.setSpeed(Speed); Motor4.setSpeed(Speed); // motor speed initialization
}

// loop method
void loop(){
  Distance = ultrasonic(); // this variable is used to store distance measurement data
  if (Distance <= 12) {
    allstop(); backward(); delay(100); allstop(); // robot will move backward
    L = leftsee(); // variable L stores the leftsee function
    servo.write(StartPoint); delay(800); // reset servo position
    R = rightsee(); // variable R stores the rightsee function
    servo.write(StartPoint); // reset servo position
    if (L < R) { // if L is smaller than R then:
      turnleft(); delay(500); allstop(); delay(200); // robot will turn left
    } else if (L > R) { // if L is larger than R then:
      turnright(); delay(500); allstop(); delay(200); // robot will turn right
    }
  } else {
    forward(); // robot will move forward
  }
}

void forward(){ Motor1.run(FORWARD); Motor2.run(FORWARD); Motor3.run(FORWARD); Motor4.run(FORWARD); } // motor control method: forward
void backward(){ Motor1.run(BACKWARD); Motor2.run(BACKWARD); Motor3.run(BACKWARD); Motor4.run(BACKWARD); } // motor control method: backward
void turnleft(){ Motor1.run(BACKWARD); Motor2.run(BACKWARD); Motor3.run(FORWARD); Motor4.run(FORWARD); } // motor control method: turnleft
void turnright(){ Motor1.run(FORWARD); Motor2.run(FORWARD); Motor3.run(BACKWARD); Motor4.run(BACKWARD); } // motor control method: turnright
void allstop(){ Motor1.run(RELEASE); Motor2.run(RELEASE); Motor3.run(RELEASE); Motor4.run(RELEASE); } // motor control method: stop
void start(){ delay(3000); for (int a = 0; a < 4; a++) { servo.write(StartPoint); delay(50); servo.write(40); delay(50); servo.write(90); delay(50); servo.write(StartPoint); } // start method

int leftsee(){ servo.write(20); delay(800); Left = ultrasonic(); return Left; } // leftsee function
int rightsee(){ servo.write(150); delay(800); Right = ultrasonic(); return Right; } // rightsee function
int ultrasonic(){ digitalWrite(Trig, LOW); delayMicroseconds(4); digitalWrite(Trig, HIGH); delayMicroseconds(10); digitalWrite(Trig, LOW); long t = pulseIn(Echo, HIGH); long cm = t / 29 / 2; return cm; } // ultrasonic function
