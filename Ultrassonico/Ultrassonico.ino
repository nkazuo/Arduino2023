// Incluir a biblioteca "Ultrasonic.h", que contém as funções necessárias para trabalhar com o sensor ultrassônico
#include "Ultrasonic.h"
// Pino digital utilizado pelo echo (recebe) do sensor ultrassônico
const int echoPin = 13;
// Pino digital utilizado pelo trig (envia) do sensor ultrassônico
const int trigPin = 12;
// Inicializar uma instância da classe "Ultrasonic" com os pinos do Arduino
Ultrasonic ultrasonic(trigPin, echoPin);

void setup() {
 
  // Iniciar a comunicação serial com uma taxa de transmissão de 9600 baud
  Serial.begin(9600);
}
void loop() {
  // Medir a distância utilizando o sensor ultrassônico e armazenar o valor em centímetros na variável "distancia"
  int distancia = ultrasonic.read(CM);
  // Converter o valor da distância em uma string e armazenar na variável "result"
  String result = String(distancia);
  // Imprimir a distância no monitor serial
  Serial.print("Distancia= ");
  Serial.print(result);
  Serial.println("cm");
  // Aguardar um intervalo de 500 milissegundos antes da próxima leitura
  delay(500);
}
