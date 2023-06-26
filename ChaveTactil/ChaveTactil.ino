// definir o número dos pinos
const int buttonPin = 2;  // o número do pino do botão
const int ledPin = 11;    // o número do pino do led
// mudança de variável:
int buttonState = 0;  // variável para ler o status do botão
void setup() {
  // indicando o pino do led como uma saída:
  pinMode(ledPin, OUTPUT);
  // indicando o pino do botão de pressão como uma entrada:
  pinMode(buttonPin, INPUT);
}
void loop() {
  // ler o estado do valor do botão:
  buttonState = digitalRead(buttonPin);
  // verificar se o botão está pressionado.
  // se sim, o estado do botão é alto:
  if (buttonState == HIGH) {
    // acende o led:
    digitalWrite(ledPin, HIGH);
  } else {
    // se não, led apagado:
    digitalWrite(ledPin, LOW);
  }
}
