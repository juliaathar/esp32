/* ESP32 MODELO
*/
int variavel = 10;

void setup() {
  //Código que será executado apenas uma vez
  Serial.begin(115200);
  Serial.println("ESP32 rocks!");
}

void loop() {
  //Código que será executado continuamente
  Serial.println("Disciplina AICSS");
  delay(2000);
}
