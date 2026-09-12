int button = 13;
bool isClicked = false;
int randNum = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
  for (int i = 2; i <= 7; i++){
   pinMode(i,OUTPUT); 
  }
  for (int i = 2; i <= 7; i++){
     digitalWrite(i, LOW); 
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == HIGH && isClicked == false){
    randNum = random(2,8);
    Serial.println(randNum);
    isClicked = true;

    for (int i = 2; i <= randNum; i++){
     digitalWrite(i,HIGH); 
    }
  }
  if (digitalRead(button) == LOW ){
    isClicked = false;
  }
}
