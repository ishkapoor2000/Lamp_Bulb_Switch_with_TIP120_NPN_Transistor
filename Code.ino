int outPin = 9;
int buttonPin = 3;
int buttonVal;

void setup()
{
    pinMode(outPin, OUTPUT);
    pinMode(buttonPin, INPUT);
    digitalWrite(outPin, LOW); // Make sure transistor is off.
}

void loop()
{
  buttonVal = digitalRead(buttonPin);
  if (buttonVal == HIGH) {
      // buttonVal -> HIGH => Button is not pressed
      // Turn off the bulb/lamp
      digitalWrite(outPin, LOW);
      delay(20);
  } else {
      digitalWrite(outPin, HIGH);
      delay(5000);
      // Set the bulb/lamp on for 5 seconds.
      digitalWrite(outPin, LOW);
  }
}
