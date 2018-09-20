/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* sensorHit:
* Código para verificar valor do sensorHit
*/

#include <Arduino.h>

//Variaveis e Constantes
int Led = 3;// Pino do led
int Shock = 2;// Pino do sensor
int val;

void setup () {
 Serial.begin(9600); //Inicia comunicação serial
 pinMode(Led, OUTPUT); //Pino led como saida
 pinMode(Shock, INPUT); //Pino sensor como entrada
}

void loop () {
 val = digitalRead (Shock);// Atribui o valor do sensor para val
 Serial.println(val); //Exibe o val
 if (val) {// Se val
  digitalWrite(Led, LOW); //Apaga o led
 }
 else {//Caso contrario
  digitalWrite(Led, HIGH);//Acende o led
 }
delay(2000);//Espera 2 segundos
}