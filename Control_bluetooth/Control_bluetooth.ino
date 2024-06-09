#include <Arduino.h>

// Define pins
#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11

// Duration for output
int duration = 60;

void setup() {
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    int command = Serial.read();
    Serial.print("Received command: ");
    Serial.println(command);
    send_command(command, duration);
  } else {
    reset();
  }
}

void right(int duration) {
  // Write your right movement logic here
}

void left(int duration) {
  // Write your left movement logic here
}

void forward(int duration) {
  // Write your forward movement logic here
}

void reverse(int duration) {
  // Write your reverse movement logic here
}

void forward_right(int duration) {
  // Write your forward-right movement logic here
}

void forward_left(int duration) {
  // Write your forward-left movement logic here
}

void reverse_right(int duration) {
  // Write your reverse-right movement logic here
}

void reverse_left(int duration) {
  // Write your reverse-left movement logic here
}

void reset() {
  // Write your reset logic here
}

void send_command(int command, int duration) {
  switch (command) {
    case 0: reset(); break;
    case 1: forward(duration); break;
    case 2: reverse(duration); break;
    case 3: right(duration); break;
    case 4: left(duration); break;
    case 6: forward_right(duration); break;
    case 7: forward_left(duration); break;
    case 8: reverse_right(duration); break;
    case 9: reverse_left(duration); break;
    default: Serial.println("Invalid Command");
  }
}