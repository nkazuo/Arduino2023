// Conexões do Motor A
int enA = 9; // Pino de habilitação A
int in1 = 8; // Pino de entrada 1 do Motor A
int in2 = 7; // Pino de entrada 2 do Motor A
// Conexões do Motor B
int enB = 3; // Pino de habilitação B
int in3 = 5; // Pino de entrada 1 do Motor B
int in4 = 4; // Pino de entrada 2 do Motor B

// LED na porta analógica 5
int ledPin = A5;

// Variáveis para controle do LED
bool ledState = false;
unsigned long previousTime = 0;
const unsigned long interval = 100;

void setup() {
  // Configurar todos os pinos de controle do motor como saídas
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Configurar o pino do LED como saída
  pinMode(ledPin, OUTPUT);

  // Desligar os motores - Estado inicial
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
  piscaLed();
  controleDirecao();
  controleVelocidade();
  
}

// Função para controlar a direção de rotação dos motores
void controleDirecao() {
  // Configurar os motores para a velocidade máxima
  // Para PWM, os valores possíveis vão de 0 a 255
  analogWrite(enA, 80);
  analogWrite(enB, 80);

  // Ligar o motor A e B
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);

  // Agora mudar as direções dos motores
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);

  // Desligar os motores
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

// Função para controlar a velocidade dos motores
void controleVelocidade() {
  // Ligar os motores
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  // Acelerar de zero até a velocidade máxima
  for (int i = 0; i < 256; i++) {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }

  // Desacelerar da velocidade máxima até zero
  for (int i = 255; i >= 0; --i) {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }

  // Desligar os motores
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

// Função para piscar o LED continuamente
void piscaLed() {
  unsigned long currentTime = millis();
  if (currentTime - previousTime >= interval) {
    previousTime = currentTime;
    ledState = !ledState;
    digitalWrite(ledPin, ledState ? HIGH : LOW);
  }
}
