
int const trigPin = 4;
int const ultraPin = 3;
int const buzzerPin = 2;
int const motorPin = 5;
void setup()
{
pinMode(trigPin, OUTPUT); 
pinMode(ultraPin, INPUT); 
pinMode(buzzerPin, OUTPUT);
pinMode(motorPin, OUTPUT);

}

void loop()
{

int duration, distance;

digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);

duration = pulseIn(ultraPin, HIGH);

distance = (duration/2) / 29.1;

if (distance <= 100 && distance >= 0) {

digitalWrite(buzzerPin, HIGH);
digitalWrite(motorPin, HIGH);
} else {

digitalWrite(buzzerPin, LOW);
digitalWrite(motorPin, LOW);
}

delay(60);
}
