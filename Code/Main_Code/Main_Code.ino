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

  if (reading < 72) //display zero
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 72 && reading < 144) //display one
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, LOW);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 144 && reading < 217) //display two
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, LOW);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 217 && reading < 289) //display three
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 289 && reading < 361) //display four
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, LOW);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 361 && reading < 433) //display five
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, LOW);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 433 && reading < 506) //display six
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, LOW);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 506 && reading < 578) //display seven
  {
    digitalWrite(center, LOW);
    digitalWrite(leftUp, LOW);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, LOW);
    digitalWrite(leftDown, LOW);
  }
  else if (reading >= 578 && reading < 650) //display eight
  {
    digitalWrite(center, HIGH);
    digitalWrite(leftUp, HIGH);
    digitalWrite(centerUp, HIGH);
    digitalWrite(rightUp, HIGH);
    digitalWrite(rightDown, HIGH);
    digitalWrite(centerDown, HIGH);
    digitalWrite(leftDown, HIGH);
  }
  else if (reading >= 650) //display nine
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
