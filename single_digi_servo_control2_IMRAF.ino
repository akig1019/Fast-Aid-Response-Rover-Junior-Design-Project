#include <Servo.h>

Servo myServo;  // Create the servo object

void setup() {
  myServo.attach(9);  // Signal wire on Pin 9
  myServo.write(0);   // Initialize at 0 degrees
  delay(500);         // Wait for it to get there
}

void loop() {
  // SLOW MOVE: 0 to 45 degrees
  for (int pos = 0; pos <= 45; pos++) {
    myServo.write(pos);
    delay(40); // Increase this number to go even slower
  }

  delay(1000); // Wait 1 second at the 45-degree mark

  // SLOW MOVE: 45 back to 0 degrees
  for (int pos = 45; pos >= 0; pos--) {
    myServo.write(pos);
    delay(40); 
  }

  delay(1000); // Wait 1 second before repeating
}