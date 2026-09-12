int led1 = 3;
int led2 = 5;
int led3 = 6;
int led4 = 9;
int led5 = 10;
int led6 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  }
void loop() {
  // put your main code here, to run repeatedly:
  fade(led1, led4);
  fade(led2, led5);
  fade(led3, led6);
}

void fade(int led, int led2nd) {
  int count = 0;
   while(count < 255) {
    analogWrite(led, count);
    analogWrite(led2nd, count);
     delay(20);
     count += 5;
   }
  while(count >=0)  {  
    analogWrite(led, count);
    analogWrite(led2nd, count);
    delay(20);
    
   count -=5;
  }
}
 

  
