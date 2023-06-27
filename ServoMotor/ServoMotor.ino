#include <Servo.h>        //inclusão da biblioteca Servo.h
const int pinoServo = 6;  //pino digital utilizado pelo servo motor
Servo s;                  //objeto do tipo servo
int pos;                  //variável para receber o valor da posição do servo
void setup() {
  s.attach(pinoServo);  //associação do pino digital ao objeto do tipo servo
  s.write(0);           //o motor inicia em 0º
}
void loop() {
  for (pos = 0; pos < 180; pos++) {  //para "pos" igual a 0, e enquanto "pos" menor que 180, aumenta 1 em "pos"
    s.write(pos);                    //escreve o valor da posição que o servo deve girar
    delay(15);                       //pausa de 15 milissegundos
  }
  delay(1000);                        //intervalo de 1 segundo
  for (pos = 180; pos >= 0; pos--) {  //para "pos" igual a 180, enquanto "pos" maior ou igual que 0, diminui 1 em "pos"
    s.write(pos);                     //escreve o valor da posição que o servo gira
    delay(15);                        //pausa de 15 milissegundos
  }
}
