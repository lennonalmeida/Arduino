/*
*Controlando o brilho do led com o potenciometro
*OBS: Possivel ser feito sem codigo
*/
#define LedHigh 9
#define potenciometro 2

void setup() {
  pinMode(LedHigh, OUTPUT);
}

void loop() {
  int pot = analogRead(potenciometro);
  
   pot = map(pot,0, 1023, 0, 255); //map: funcao da linguagem c++ que traspoe um valor (pot) do intervalo 0-1023 para 0-255
   analogWrite(LedHigh, pot);
  
  }