#define trigPin 13
#define echoPin 12
#define speaker 11
#define motor 9

int counter = 0;
                     
void setup() {
  Serial.begin (9600);
  pinMode(motor, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(speaker, OUTPUT);
}

void setLow(){
  digitalWrite(motor, LOW);
  digitalWrite(trigPin, LOW);
}

void setTrigH(){
  digitalWrite(trigPin, HIGH);
}

long calculateDistance(long newDistance){
  return (newDistance/2) / 29.1;
}

void trigger(long distance){
  if (distance < 20) {  // This is where the LED On/Off happens
    tone(speaker, 1000, 500);
    delay(50);
  }
  else if(distance < 80){
    tone(speaker, 1000, 80);
    delay(125);
  }
  else if(distance < 160){
    tone(speaker, 1000, 10);
    delay(250);
  }
  if(distance < 160){
    digitalWrite(motor, HIGH);
    delay(20);
    digitalWrite(motor, LOW);
  }
}

void turnMotorOff(){
  digitalWrite(motor, LOW);
}

void loop() {
  long duration, distance, duration2, distance2;
  
  setLow();
  delayMicroseconds(2); 
  setTrigH();
  delayMicroseconds(10);
  setLow();
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = calculateDistance(duration);

  Serial.println(distance);

  trigger(distance);

  turnMotorOff();
  
  delay(50);
}
