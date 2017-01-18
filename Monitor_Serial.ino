/*
 * Testando o monitor serial gerando valores de 0-15
 */
void setup() {
  Serial.begin(9600);
  Serial.println("Gerando valores");
  
  }
  int num = 0;
void loop() {
  for (int num=0; num<16;num++){
 
    Serial.print("  Decimal: ");
    Serial.print(num);
    delay(1000);
    Serial.print("  Hexa: ");
    Serial.print(num, HEX);
    delay(1000);
    Serial.print("  Octal: ");
    Serial.print(num, OCT);
    delay(1000);
    Serial.print("  Bin ");
    Serial.print(num, BIN);
    delay(1000);
    Serial.println("");

    if(num==15){
      num=0;
    }
  }
}
