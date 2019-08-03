// Digital pin 12 will be called 'pin12'
int pin12 = 12;
// Analog pin 1 will be called 'sensor'
int sensor = A1;
// Set the initial sensorValue to 1000
int sensorValue = 1000;

// The setup routine runs once when you press reset
void setup() {
  // Initialize the digital pin 12 as an output
  pinMode(pin12, OUTPUT);
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
}

// The loop routine runs over and over again forever
void loop() {
  // Print out the value you read
  Serial.println(sensorValue, DEC);
  // If sensorValue is greater than 500
  if (sensorValue > 500) {
    // Activate digital output pin 12 - the LED will light up
    digitalWrite(pin12, HIGH);
  }
  else {
    // Deactivate digital output pin 12 - the LED will not light up
    digitalWrite(pin12, LOW);
  }

}
