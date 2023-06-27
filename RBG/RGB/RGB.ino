// definir as variaveis para os pinos utilizados
int pinoR = 11; // pino utilizado pelo terminal R (vermelho)
int pinoB = 10; // pino utilizado pelo terminal B (azul)
int pinoG = 9; // pino utilizado pelo terminal G (Verde)

#define COMMON_CATODE //define o Led RGB como catodo comum

void setup(){
// define os pinos do Led como saida
pinMode(pinoR, OUTPUT);
pinMode(pinoG, OUTPUT);
pinMode(pinoB, OUTPUT);
}



void loop(){
setColor(255, 0, 0); // valores para obter a cor vermelha
delay(1000); // aguarda 1 segundo
setColor(0, 255, 0); // valores para obter a cor verde
delay(1000); // aguarda 1 segundo
setColor(0, 0, 255); // valores para obter a cor azul
delay(1000); // aguarda 1 segundo
setColor(255, 255, 0); // valores para obter a cor amarela
delay(1000); // aguarda 1 segundo
setColor(255, 0, 220); // valores para obter a cor violeta
delay(1000); // aguarda 1 segundo
setColor(150, 200, 255); // valores para obter a cor azul agua
delay(1000); // aguarda 1 segundo
setColor(255, 255, 255); // valores para obter um tom de branco
delay(1000); // aguarda 1 segundo
}

// funçao para produzir o brilho do led de acordo com valores informados
void setColor(int vermelho, int verde, int azul){

analogWrite(pinoR, vermelho); // define o brilo do led de acordo com o velor de 'vermelho'
analogWrite(pinoG, verde); // define o brilo do led de acordo com o velor de 'verde'
analogWrite(pinoB, azul); // define o brilo do led de acordo com o velor de 'azul'
}