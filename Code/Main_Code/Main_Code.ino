const int lightRead = 0;
const int center = 2;
const int leftUp = 6;
const int centerUp = 5;
const int rightUp = 4;
const int rightDown = 3;
const int centerDown = 8;
const int leftDown = 7;

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

  if (reading < 130) //display zero
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 130 && reading < 145) //display one
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, LOW);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 145 && reading < 160) //display two
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, LOW);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 160 && reading < 175) //display three
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 175 && reading < 190) //display four
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, LOW);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 190 && reading < 205) //display five
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, LOW);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 205 && reading < 220) //display six
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, LOW);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 220 && reading < 235) //display seven
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 235 && reading < 250) //display eight
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 250) //display nine
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  //delay(500);
}
