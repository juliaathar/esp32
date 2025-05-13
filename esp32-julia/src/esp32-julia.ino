#include <DHT.h> // INCLUINDO A BIBLIOTECA DHT NO CÓDIGO
 
#define DHTPIN 19 // DEFININDO O PINO DE ENTRADA DO DHT
#define DHTMODEL DHT22 // DEFININDO QUAL O MODELO DO DHT QUE VOU UTILIZAR
 
DHT dht (DHTPIN, DHTMODEL); // INCLUINDO TODAS AS VARIAVIES QUE INDIQUEI ANTES NO DHT
 
#define LEDVERMELHO 26
#define LEDAZUL 27
 
float temp, umid, hic;
 
void setup()
{
  Serial.begin(9600);
  dht.begin(); // LIGANDO O DHT
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDAZUL, OUTPUT);
}
 
void loop()
{
  temp = dht.readTemperature(); // PEDINDO PARA O DHT REALIZAR A LEITURA DA VARIAVEL DE TEMPERATURA
  umid = dht.readHumidity(); // PEDINDO PARA O DHT REALIZAR A LEITURA DA VARIAVEL DE UMIDADE
 
// VERIFICA SE TEVE HOUVE ERRO DE LEITURA NO DHT
  if (isnan(umid) || isnan(temp)) {
    Serial.println("\nFalha na leitura!");
    return;
  }
 
  Serial.println("--- Temperatura: " + String(temp));
  Serial.println("--- Umidade: " + String(umid));
  Serial.println("--- IC: " + String(hic));
 
// FAZENDO O DHT CALCULAR O INDICE DE CALOR DE ACORDO COM AS VARIAVIES DE TEMP E UMID
  hic = dht.computeHeatIndex(temp, umid, false); // O "FALSE" DIZ PARA O SISTEMA QUE É PARA EXIBIR O RESULTADO EM ºC (CELSIUS)
 
  if (hic > 20) {
    digitalWrite(LEDVERMELHO, HIGH);
    Serial.println("\nATENÇÃO: indice de calor alto!");
  } else {
    Serial.println("\nATENÇÃO: indice de calor baixo!");
  }
 
// DELAY MINIMO PARA O DHT É DE 2000 (2seg)
  delay(2500);
}