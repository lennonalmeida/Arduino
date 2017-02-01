/*
 * Sensor ultrasonico hc-sr04 medindo a distancia e ligando led
 */
#include <Ultrasonic.h>
 
//Define os pinos para o trigger e echo
#define trigger 4
#define echo 5
#define led 10
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(trigger, echo); //Para maiores informações, estudar o codigo da biblioteca Ultrasonic
float distance = 0;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}
 
void loop()
{
  //Exibe informacoes no serial monitor
  distance = ultrasonic.Ranging(CM);
  Serial.print("Distancia em cm: ");
  Serial.println(distance);
  if(distance < 20)
      digitalWrite(led, 1);
  else
      digitalWrite(led, 0);
      
  delay(10);
}
