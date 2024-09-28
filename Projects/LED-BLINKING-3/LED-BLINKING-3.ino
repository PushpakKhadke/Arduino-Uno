int ledPin = 13; // LED connected to digital pin 13
int buttonPin = 2; // push button connected to digital pin 2
int buttonState = 1; // variable to store the button state

void setup() {
  pinMode(ledPin, OUTPUT); // initialize the LED pin as an output
  pinMode(buttonPin, INPUT); // initialize the button pin as an input
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the button
  if (buttonState == HIGH) { // if the button is pressed
    digitalWrite(ledPin, HIGH); // turn on the LED
  } else { // if the button is not pressed
    digitalWrite(ledPin, LOW); // turn off the LED
  }
}

