int led = A5;
int led1 = D7;
int photoresistor = A0;
int analogValue;
 
void setup() {

pinMode(led, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(photoresistor, INPUT);
Particle.variable("light", &analogValue, INT);
}

void loop() {
    
 analogValue = analogRead(photoresistor);
 

if(analogValue > 27){
    digitalWrite(led, LOW);
     digitalWrite(led1, LOW);
}else{
    digitalWrite(led , HIGH);
     digitalWrite(led1, HIGH);
}

}