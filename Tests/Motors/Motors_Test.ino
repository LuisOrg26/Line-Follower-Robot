#define LED_PIN 13 

void setup() {
  Serial.begin(9600); 
  pinMode(LED_PIN, OUTPUT); 
}

void loop() {
  digitalWrite(LED_PIN, HIGH); 
  Serial.println("LED turned ON."); 
  delay(1000); 
  digitalWrite(LED_PIN, LOW); 
  Serial.println("LED turned OFF."); 
  delay(1000); 
}






