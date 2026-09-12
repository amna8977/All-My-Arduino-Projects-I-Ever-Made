int tiltSwitch = 2;
int redPin = 5;
int bluePin = 4;
int greenPin = 10;
bool reset = false;
int lives = 3;
int blinkTime = 1000;
int buzzer = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode (tiltSwitch, INPUT );
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(tiltSwitch),trigLoseLife, CHANGE);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (lives == 3){
      digitalWrite (greenPin, HIGH);
      digitalWrite (redPin, LOW);
      digitalWrite (bluePin, LOW);
  }

  else if (lives == 2){
    
      digitalWrite (greenPin, HIGH);
      digitalWrite (redPin, HIGH);
      digitalWrite (bluePin, LOW);
  }

  else if (lives == 1){
    
      digitalWrite (redPin, HIGH);
      digitalWrite (greenPin, LOW);
      digitalWrite (bluePin, LOW);
  }
  else{
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(buzzer,LOW);
    delay(1000);
  }

  delay(blinkTime);
  digitalWrite (redPin, LOW);
  digitalWrite (greenPin, LOW);
  digitalWrite (bluePin, LOW);    
  reset=false;
  
  delay(blinkTime); 
    
   
}


void trigLoseLife (){
  if (reset == false){
    lives -= 1;
    blinkTime /= 2;
    reset = true;
  }
}
