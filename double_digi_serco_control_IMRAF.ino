#include <Servo.h>

Servo servoOne;
Servo servoTwo;

void setup() {
  servoOne.attach(9);
  servoTwo.attach(6);
  
  // Start them at 0
  servoOne.write(0);
  servoTwo.write(0);
  delay(500); 
}

void loop() {
  // Move slowly to 45 degrees
  // Increase the delay (30ms) to go even slower
  for (int pos = 0; pos <= 45; pos++) {
    servoOne.write(pos);
    servoTwo.write(pos);
    delay(30); // Larger number = Slower speed
  }

  delay(1000); // Wait at 45 degrees

  // Return to 0 degrees quickly (for comparison)
  servoOne.write(0);
  servoTwo.write(0);
  
  delay(1000); // Wait before repeating
}