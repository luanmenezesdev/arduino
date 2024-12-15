#define BUTTON_PIN 7
#define LED_PIN 10
int state_button = 0;
bool state_led = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN, INPUT);
}

void loop() {
  state_button = digitalRead(BUTTON_PIN);

  if (state_button == HIGH) {
    state_led = !state_led;
    delay(500);
  }

  if (state_led == true) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
