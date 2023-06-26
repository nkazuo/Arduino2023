const int pinoPOT = A0;     //pino analógico utilizado pelo potenciômetro
const int pinoLED = 11;     //pino digital utilizado pelo led
float luminosidadeLED = 0;  //variável que armazena o valor da luminosidade do led
void setup() {
  pinMode(pinoPOT, INPUT);   //define o pino do potenciômetro como entrada
  pinMode(pinoLED, OUTPUT);  //define o pino do led como saída
}
void loop() {
  //executa a função "map" de acordo com os parâmetros passados
  luminosidadeLED = map(analogRead(pinoPOT), 0, 1023, 0, 255);
  //aplica ao led o valor de luminosidade gerado pela função "map"
  analogWrite(pinoLED, luminosidadeLED);
}
