//initialize digital pin for buzzer
int BUZZER = 8;


void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   int sensorValue = analogRead(A0); // response from potentiometer is an integer, analogRead to response
   int sensorDelay = analogRead(A2);
   
    digitalWrite(BUZZER, HIGH); //high to activate the pin (low is for disabling it or turning it off)
    
    tone(BUZZER,sensorValue, sensorDelay); //tone for buzzing sound, integers read from variables also in function
    
    delay(200); //delay of 200ms
}
