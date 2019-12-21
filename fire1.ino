float THERMISTORPIN= A0; // Thermistor connected to A0
int buzzerpin = 10;// Buzzer connected to pin 10
 
void setup(void) {
  pinMode(buzzerpin,OUTPUT);
  Serial.begin(9600);
}
 
void loop(void) {
  float reading;
 
  reading = analogRead(THERMISTORPIN);
 
  Serial.print("Analog reading "); 
  Serial.println(reading);
  if (reading<400)
  {
    digitalWrite(buzzerpin,HIGH);
     
  }
  else
  {
    digitalWrite(buzzerpin,LOW);
  }
  
  // convert the value to resistance
 
 
  delay(1000);
}
