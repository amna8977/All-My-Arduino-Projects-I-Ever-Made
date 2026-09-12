int redPin = 12;
int bluePin = 10;
int greenPin = 11;


void setup() {

  pinMode(redPin, OUTPUT);  
  pinMode(bluePin, OUTPUT);  
  pinMode(greenPin, OUTPUT);
Serial.begin(9600);
}


void loop() {

    changeColor('r');
    delay(400);
    changeColor('g');
    delay(400);
    changeColor('b');
    delay(400);
    changeColor('c');
    delay(400);
    changeColor('y');
    delay(400);
    changeColor('m');
    delay(400);


  
}
void changeColor(char color){
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);
    
    if (color == 'r') {
     digitalWrite(redPin, HIGH); }
    
     else if (color == 'b') {
     digitalWrite(bluePin, HIGH); }
    
    else if (color == 'g') {
    digitalWrite(greenPin, HIGH); }

     else if (color == 'm') {
     digitalWrite(redPin, HIGH);
     digitalWrite(bluePin, HIGH);}
    
     else if (color == 'c') {
     digitalWrite(bluePin, HIGH); 
     digitalWrite(greenPin, HIGH);}
    
     else if (color == 'y') {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, HIGH);  }
    
}
