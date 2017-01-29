/*
 * Controle de luminosidade
 * Mostra no monitor serial (ctrl+shift+m) o valor da luminosidade em %
 * Um led é acesso quando a luminosidade for menor que 20%
 */
#define led 12
#define ldr 1
int luz;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
 luz = analogRead(ldr);
 luz = map(luz, 0, 1023, 0, 100); //funçao que converte de 0-1023 para 0-100
 if (luz <= 20) 
   digitalWrite(led, HIGH); 
 else 
   digitalWrite(led, LOW);

  /*
  *Caso haja erros na porcentagem, usar luz = 100.0 - luz;
  */
 Serial.print("Valor LDR(%):");
 Serial.println(luz);
 delay(1000);

}
