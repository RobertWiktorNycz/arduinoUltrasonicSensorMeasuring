// program will be measuring the distance using ultrasonic sensor HC-sr04
// following the tutorial based on https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/
// All math / phisics calculations are available under that link and in the code explaining
// calculations, and in Readme
// Sensor connection available under link: https://howtomechatronics.com/wp-content/uploads/2015/07/Ultrasonic-Sensor-Cirucit-Schematics-04.png
// Enjoy :)

// defining variables for Triger and Echo pins in module

const int trigPin = 9; // trigger pin
const int echoPin = 10; // echo pin

// defining variables to calculate distance and period of travel time

long duration;
int distance;

void setup() {
  pinMode (trigPin, OUTPUT); // setting the trigPin as an Output
  pinMode (echoPin, INPUT); // setting echoPin as an Input
  Serial.begin(9600); // Start serial communication

}

void loop() {
  digitalWrite (trigPin, LOW); // Clear the trigPin
  delayMicroseconds(2); // Delay by 2 microseconds
  // Set the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the travel time of sound wave in microseconds

  duration = pulseIn(echoPin, HIGH);

  // calculate the distance
  // Distance is calculated by calculating the speed of sound (340m/s), in this case 0.034cm/microseconds
  // and dividing the result by half because of the return wave
  // and conversion of equation of speed (speed = distance / time )
  // so distance = speed * time
  // Result is in CM
  
  distance = duration * 0.034 / 2;

  // print the distance in serial monitor
  Serial.print(" Distance in CM: ");
  Serial.println(distance);
  // wait for 1 second for next reading
  delay(1000);
}
