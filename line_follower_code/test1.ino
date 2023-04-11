#define LED 22

void setup() {
    Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.print("Encendido");

  delay(500);
  digitalWrite(LED, LOW);
  Serial.print("Apagado");

  delay(500);
}

