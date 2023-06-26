int pinoLed = 4;     //pino digital utilizado pelo led
int pinoSensor = 9;  //pino digital utilizado pelo sensor
void setup() {
 
  pinMode(pinoSensor, INPUT);  //define o pino como entrada
  pinMode(pinoLed, OUTPUT);    //define o pino como saída
  digitalWrite(pinoLed, LOW);  //led inicia desligado
}
void loop() {
  if (digitalRead(pinoSensor) == LOW) {  //se em contato com uma superfície clara, acende o led
    digitalWrite(pinoLed, HIGH); 
 
  } else {  //se não, led apagado
    digitalWrite(pinoLed, LOW);
   
  }
  delay(100);
}
