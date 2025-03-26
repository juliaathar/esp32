/* ESP32 MODELO
*/

#define LED_PIN 26 

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);  
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  
  delay(500);
  Serial.println("LED ACESO");                 
  digitalWrite(LED_PIN, LOW); 
  delay(500);  
  Serial.println("LED APAGADO");               
}