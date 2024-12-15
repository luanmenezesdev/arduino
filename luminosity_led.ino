#define LDR A0
#define LED_PIN 10
int valor_ldr = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  valor_ldr = analogRead(LDR);
  bool is_low_light = valor_ldr < 150;

  if (is_low_light) {
    digitalWrite(LED_PIN, HIGH);
    return;
  }

  digitalWrite(LED_PIN, LOW);
}
