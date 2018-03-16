const int ledPin=13;//asignacion de puerto en arduino de led
 const int buzzerPin=12;//asignacion de puerto en arduino de Buzzer
 const int ldrPin=A0;
  
void setup() {
 Serial.begin(9600);
 pinMode(ledPin, OUTPUT);//entrada de led
 pinMode(buzzerPin, OUTPUT);//entrada de buzzer
 pinMode(ldrPin, INPUT);// salida
}
void loop() {
  int ldrStatus = analogRead(ldrPin);
 if  (ldrStatus >= 400){// si 
  tone (buzzerPin,100);
  digitalWrite(ledPin, HIGH);
  delay(100);

 noTone(buzzerPin);
  digitalWrite(ledPin, LOW);
  delay(100);
  Serial.println("--Alarma Activada--");// impresion de  alarma activada
 }
 else {
  noTone(buzzerPin);
  digitalWrite(ledPin, LOW);
  Serial.println("Alarma DESACTIVADA  ");//descactivacion de alarma
 }
}
