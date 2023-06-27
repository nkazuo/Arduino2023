// Conexões do Motor A
int enA = 9; // Pino de habilitação A
int in1 = 8; // Pino de entrada 1 do Motor A
int in2 = 7; // Pino de entrada 2 do Motor A
// Conexões do Motor B
int enB = 3; // Pino de habilitação B
int in3 = 5; // Pino de entrada 1 do Motor B
int in4 = 4; // Pino de entrada 2 do Motor B

void setup() {
  // Configurar todos os pinos de controle do motor como saídas
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Desligar os motores - Estado inicial
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
  controleDirecao();
  delay(1000);
  controleVelocidade();
  delay(1000);
}

// Essa função permite controlar a direção de rotação dos motores
void controleDirecao() {
  // Configurar os motores para a velocidade máxima
  // Para PWM, os valores possíveis vão de 0 a 255
  analogWrite(enA, 255);
  analogWrite(enB, 255);

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

// Essa função permite controlar a velocidade dos motores
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

  // Agora desligar os motores
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
