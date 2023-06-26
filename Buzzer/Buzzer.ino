void setup() {
  pinMode(11, OUTPUT);  //definir o pino utilizado pelo buzzer como saida
}
void loop() {
  //delay é o tempo de espera em milissegundos
  delay(1000);
  tone(11, 262, 200);  //DO
  delay(200);
  tone(11, 294, 300);  //RE
  delay(200);
  tone(11, 330, 300);  //MI
  delay(200);
  tone(11, 349, 300);  //FA
  delay(300);
  tone(11, 349, 300);  //FA
  delay(300);
  tone(11, 349, 300);  //FA
  delay(300);
  tone(11, 262, 100);  //DO
  delay(200);
  tone(11, 294, 300);  //RE
  delay(200);
  tone(11, 262, 100);  //DO
  delay(200);
  tone(11, 294, 300);  //RE
  delay(300);
  tone(11, 294, 300);  //RE
  delay(300);
  tone(11, 294, 300);  //RE
  delay(300);
  tone(11, 262, 200);  //DO
  delay(200);
  tone(11, 392, 200);  //SOL
  delay(200);
  tone(11, 349, 200);  //FA
  delay(200);
  tone(11, 330, 300);  //MI
  delay(300);
  tone(11, 330, 300);  //MI
  delay(300);
  tone(11, 330, 300);  //MI
  delay(300);
  tone(11, 262, 200);  //DO
  delay(200);
  tone(11, 294, 300);  //RE
  delay(200);
  tone(11, 330, 300);  //MI
  delay(200);
  tone(11, 349, 300);  //FA
  delay(300);
  tone(11, 349, 300);  //FA
  delay(300);
  tone(11, 349, 300);  //FA
  delay(300);
}
