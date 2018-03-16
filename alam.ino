 const int ledPin=13;//Asignacion de  puerto en arduino
 const int buzzerPin=12;//Asignacion de puerto en arduino Buzzer
 const int ldrPin=A0;
  
void setup() {
 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);//entrada de led
 pinMode(buzzerPin, OUTPUT);//netrada de buzzer
 pinMode(ldrPin, INPUT);//salida
}
void loop() {
  int ldrStatus = analogRead(ldrPin);
 if  (ldrStatus >= 400){
  tone (buzzerPin,100);
  digitalWrite(ledPin, HIGH);
  delay(100);

  noTone(buzzerPin);
  digitalWrite(ledPin, LOW);
  delay(100);
  Serial.println("--Alarma Activada--");//impresion de alarma activada
 }
 else {
  noTone(buzzerPin);
  digitalWrite(ledPin, LOW);
  Serial.println("Alarma DESACTIVADA XD ");//Alarma Desactivada
 }
}

