//Sensor de luz com LDR
int PinLed = 11;   //Led conectado ao pino 11
int Pinldr = A5;   //LDR conectado ao pino analógico 5
int Valorldr = 0;  //variavel que ira receber o valor do LDR
void setup() {
  pinMode(PinLed, OUTPUT);  //define a porta 11 como saída
  Serial.begin(9600);       //Inicia a comunicação serial
}
void loop() {
  //ler o valor do LDR
  Valorldr = analogRead(Pinldr);  //O valor lido será entre 0 e 1023
  //se o valor lido for maior que 800, liga o led
  if (Valorldr >= 400) digitalWrite(PinLed, HIGH);
  // se não, apaga o led
  else digitalWrite(PinLed, LOW);
  //imprime o valor lido do LDR no monitor serial
  Serial.println(Valorldr);
  delay(100);
}
