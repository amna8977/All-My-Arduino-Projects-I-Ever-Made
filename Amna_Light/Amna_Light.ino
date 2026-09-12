int button = 11;
int pedGreen = 13;
int pedRed = 10;
int carGreen = 8;
int carYellow = 6;
int carRed = 7;
bool cars = false;
bool isClicked = false;

void setup() {
  pinMode(button, INPUT);  
  pinMode(pedGreen,OUTPUT);
  pinMode(pedRed,OUTPUT) ;
  pinMode(carGreen ,OUTPUT); 
  pinMode(carYellow,OUTPUT) ;
  pinMode(carRed,OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(button) == HIGH && isClicked == false) {
    cars = !cars; 
    isClicked = true;
    
    if (cars == true){
      Serial.println("Cars go.");
      digitalWrite (carGreen, HIGH) ;
      digitalWrite (pedGreen, LOW) ;
      digitalWrite (carRed, LOW) ;
      digitalWrite (pedRed, HIGH) ; }
   
    else{
      Serial.println("People go."); 
    digitalWrite (carGreen, LOW) ;
    digitalWrite (carRed, HIGH) ;
    delay(500);
    digitalWrite (pedRed, LOW) ;
    digitalWrite (pedGreen, HIGH) ;
    delay(500);
    }
 }
  if (digitalRead(button) == LOW) {
    isClicked = false;
 }
}
