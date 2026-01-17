
int button = 8; 
int tempPin = 0;
int motorPin = 2;
int tempLimit = 25.0;

void setup() {
  pinMode(button, INPUT);
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
  Serial.begin(9600); 
}

void loop() {

  
  int reading = analogRead(tempPin);                 
  float voltage = reading * (5.0 / 1023.0);
  float temperatureC = voltage * 10.0;


  Serial.println(temperatureC);
  delay(100);
  //Serial.println(tempLimit);


  if(temperatureC>tempLimit){
    digitalWrite(motorPin, HIGH);
  }
   else if(temperatureC<=tempLimit){
    digitalWrite(motorPin, LOW);
    }
  
  if(digitalRead(button)){
    tempLimit = temperatureC;
  }
 //digitalWrite(motorPin, !digitalRead(button));

  
  }





  


