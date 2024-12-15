#define BUTTON_PIN 7
#define LED_PIN 10
int state_button = 0;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(LED_PIN, INPUT);
}

void loop() {
    state_button = digitalRead(BUTTON_PIN);

    if (state_button == HIGH) { // button is pressed
        digitalWrite(LED_PIN, HIGH);
        delay(100);
    } else {
        digitalWrite(LED_PIN, LOW);
    }
}
