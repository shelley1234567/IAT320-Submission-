// Pin D7 has an LED connected on FLORA.
// give it a name:
int led_blue = 12;
int led_white = 9;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led_white, OUTPUT);  
  pinMode(led_blue, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led_white, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led_white, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(led_blue, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led_blue, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
