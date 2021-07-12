#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
int IN1=13;
int IN2=12;
int IN3=11;
int IN4=10;
int IN5=9;
int IN6=8;
int IN7=7;
int IN8=6;
int IN9=5;
int IN10=4;
String readString;

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement


void setup()
{
 Serial.begin(9600);
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
 pinMode(IN5,OUTPUT);
 pinMode(IN6,OUTPUT);
 pinMode(IN7,OUTPUT);
 pinMode(IN8,OUTPUT);
 pinMode(IN9,OUTPUT);
 pinMode(IN10,OUTPUT);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
 
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,LOW);

 
}
void loop()
{
  while(Serial.available())
  {
   delay(3);
   char c=Serial.read();
   readString+=c;
  }
  if(readString.length()>0)
  {
    Serial.println(readString);

// Clears the trigPin condition in 2 microseconds
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
// Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
//  Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

 
if (readString=="Sugarcane" && distance>10)
{

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(500);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  delay(3000);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  delay(3000);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);

  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);
  delay(500);

  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);

  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,HIGH);
  delay(3000);

  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,LOW);

   digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(500);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}

else if (readString=="Corn" && distance>10)
{

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(500);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  delay(2000);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  delay(2000);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);

  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);
  delay(500);

  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);

  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,HIGH);
  delay(2000);

  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,LOW);

   digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(500);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}

else if (readString=="Cicers" && distance>10)
{

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(500);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  delay(1000);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  delay(1000);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);

  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);
  delay(500);

  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);

  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,HIGH);
  delay(1000);

  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,LOW);

   digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  delay(500);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
 
}

else if (readString=="FORWARD" && distance>10)
  {
  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,HIGH);
  delay(1000);
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,HIGH);
  digitalWrite(IN9,HIGH);
  digitalWrite(IN10,LOW);
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,HIGH);
  digitalWrite(IN10,LOW);
  delay(1000);
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,LOW);
}

else if (distance<=10)
{
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
  digitalWrite(IN9,LOW);
  digitalWrite(IN10,LOW);
 
}





  readString="";
}
  }
