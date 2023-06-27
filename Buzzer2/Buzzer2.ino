// Pino para o buzzer
const int pinoBuzzer = 11;

void setup() {
  // Define o pino do buzzer como saída
  pinMode(pinoBuzzer, OUTPUT);
}

void loop() {
  // Aciona o buzzer com frequência maior
  acionarBuzzer(2000);

  // Aguarda um pequeno intervalo antes de desligar o buzzer
  delay(1000);

  // Desliga o buzzer
  desligarBuzzer();

  // Aguarda um pequeno intervalo antes de repetir o loop
  delay(1000);
}

// Função para acionar o buzzer com uma frequência específica
void acionarBuzzer(int frequencia) {
  tone(pinoBuzzer, frequencia);
}

// Função para desligar o buzzer
void desligarBuzzer() {
  noTone(pinoBuzzer);
}
