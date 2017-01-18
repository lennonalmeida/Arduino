/*
 * Controlando a frequencia do acender-desligar do led com o potenciometro
 */

#define LedHigh 8
#define potenciometro 2
int timewait = 0;

void setup() {
  pinMode(LedHigh, OUTPUT);
  digitalWrite(LedHigh,HIGH);
}

void loop() {
  timewait = analogRead(potenciometro);

  digitalWrite(LedHigh, HIGH);
  delay(timewait);
  digitalWrite(LedHigh, LOW);
  delay(timewait);


}
