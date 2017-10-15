const int speaker_pin = 13;
const int half_period_delay_ms = 1;

void setup()
{
  pinMode(speaker_pin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);   // sets the LED on
  delay(1000);                  // waits for a second
  digitalWrite(ledPin, LOW);    // sets the LED off
  delay(1000);                  // waits for a second
}
