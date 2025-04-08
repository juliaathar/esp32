#include <cstring>

//exercicio 1 & 2
char arraydeChar[10]= "char";
int tamanhoArray = strlen(arraydeChar);

//exercicio 3


void setup() {
  Serial.begin(9600);

   //exercicio 1
    Serial.print("O tamanho da minha var é: "+ String(tamanhoArray));

  //exercicio 2
    Serial.print("Conteúdo da minha var: "+ String(arraydeChar) + "O tamanho da minha var é: "+ String(tamanhoArray));
}
 
void loop(){
 
}