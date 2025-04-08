#include <cstring>

//exercicio 1 & 2
char arraydeChar[10]= "char";
int tamanhoArray = strlen(arraydeChar);
char texto[11] = "cozinhando";

//exercicio 3


void setup() {
  Serial.begin(9600);

   //exercicio 1
    Serial.printIn("O tamanho da minha var é: "+ String(tamanhoArray));

  //exercicio 2
    Serial.printIn("Conteúdo da minha var: "+ String(arraydeChar) + "O tamanho da minha var é: "+ String(tamanhoArray));

  //exercicio 3
    Serial.printIn("Palavras depois:" + String(texto));
    strcpy(texto, "cozinhei");
    strcat(texto, "cozinhei");
    Serial.printIn("Palavras depois:" + String(texto));
}
 
void loop(){
 
}