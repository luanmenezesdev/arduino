#define LED_PIN 9 //Atribui o valor 9 a variável inteira ledPin, que irá representar o pino digital 9

void setup() {
  pinMode(LED_PIN, OUTPUT); //Define ledPin (pino 9) como saída
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a while
  digitalWrite(LED_PIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a while
}
