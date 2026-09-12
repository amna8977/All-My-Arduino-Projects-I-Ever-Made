const int beeperPin = 11;
const int echoPin = 6;

const int trigPin = 7; 

const int distanceThreshold = 30;

long duration;

int distance;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(beeperPin, OUTPUT);
}


void setup() {
  // Start serial communication for debugging
  Serial.begin(9600);

  // Set the trigger pin as an output and the echo pin as an input
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Set the beeper pin as an output
  pinMode(beeperPin, OUTPUT);
}

void loop() {
  // Clear the trigger pin by setting it LOW:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Set the trigger pin HIGH for 10 microseconds:
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo pin.  The sound wave has to travel to the object and back.
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2;

  // Print the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the distance is less than the threshold
  if (distance < distanceThreshold) {
    // Activate the beeper
    tone(beeperPin, 1000); // Send 1KHz sound signal
    delay(100);             // Delay for 100ms
    noTone(beeperPin);     // Stop sound
  }

  delay(500); // Wait for 0.5 second before the next measurement
}
