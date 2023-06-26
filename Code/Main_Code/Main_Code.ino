const int lightRead = 0;
const int center = 2;
const int leftUp = 3;
const int centerUp = 4;
const int rightUp = 5;
const int rightDown = 6;
const int centerDown = 7;
const int leftDown = 8;

void setup() 
{
  pinMode(center, OUTPUT);
  pinMode(leftUp, OUTPUT);
  pinMode(centerUp, OUTPUT);
  pinMode(rightUp, OUTPUT);
  pinMode(rightDown, OUTPUT);
  pinMode(centerDown, OUTPUT);
  pinMode(leftDown, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int reading = analogRead(lightRead);
  Serial.println(reading);

  if (reading < 5) //display zero
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 5 && reading < 10) //display one
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, LOW);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 10 && reading < 15) //display two
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, LOW);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 15 && reading < 20) //display three
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, LOW);
    digitalWrite(rightDown, LOW);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 20 && reading < 25) //display four
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, LOW);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 25 && reading < 30) //display five
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, LOW);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 30 && reading < 35) //display six
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, LOW);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 35 && reading < 40) //display seven
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 40 && reading < 45) //display eight
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 45) //display nine
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  delay(2000);
}
