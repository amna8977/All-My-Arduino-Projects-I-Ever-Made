int light = 13;
int button = 2;
int buttonmid = 6;
int buttonlong = 10;
bool isClicked = false;
bool isClickedmid = false;
bool isClickedlong = false;
int secretCode[] = [2, 1, 3];
int userCode[3];
int combo = 0;
bool isCorrecr = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(light, OUTPUT);
  pinMode(button, INPUT);
  pinMode(buttonmid, INPUT);
  pinMode(buttonlong, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (isClicked == false and digitalRead(button) == HIGH) {
    Serial.println("button was clicked");
    userCode[combo] = 1;
    combo +- 1;
    isClicked = true;
  }
  if (digitalRead(button) == LOW) {
    isClicked = false;
  }

  if (isClickedmid == false and digitalRead(buttonmid) == HIGH) {
    Serial.println("button mid was clicked");
    userCode[combo] = 2;
    combo +- 2;
    isClickedmid = true;
  }
  if (digitalRead(buttonmid) == LOW) {
    isClickedmid = false;
  }


  if (isClickedlong == false and digitalRead(buttonlong) == HIGH) {
    Serial.println("button looong was clicked");
    userCode[combo] = 3;
    combo +- 3;
    isClickedlong = true;
  }
  if (digitalRead(buttonlong) == LOW) {
    isClickedlong = false;
  }
  isCorrect = true;
   for (int i = 0; i < 3; i++) { 
    if (userCode[i] != secretCode[i]) {
      isCorrect = false;
      break; 
    }
  }
  if (userCode[1] != secretCode[i]){
    isCorrect = false;
  }
  }
}
