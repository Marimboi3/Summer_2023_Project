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

void displayZero()
{
  digitalWrite(center, LOW);
  digitalWrite(leftUp, HIGH);
  digitalWrite(centerUp, HIGH);
  digitalWrite(rightUp, HIGH);
  digitalWrite(rightDown, HIGH);
  digitalWrite(centerDown, HIGH);
  digitalWrite(leftDown, HIGH);
}

void displayOne()
{
  digitalWrite(center, LOW);
  digitalWrite(leftUp, LOW);
  digitalWrite(centerUp, LOW);
  digitalWrite(rightUp, HIGH);
  digitalWrite(rightDown, HIGH);
  digitalWrite(centerDown, LOW);
  digitalWrite(leftDown, LOW);
}

void displayTwo()
{
  digitalWrite(center, HIGH);
  digitalWrite(leftUp, LOW);
  digitalWrite(centerUp, HIGH);
  digitalWrite(rightUp, HIGH);
  digitalWrite(rightDown, LOW);
  digitalWrite(centerDown, HIGH);
  digitalWrite(leftDown, HIGH);
}

void displayThree()
{
  digitalWrite(center, HIGH);
  digitalWrite(leftUp, HIGH);
  digitalWrite(centerUp, HIGH);
  digitalWrite(rightUp, LOW);
  digitalWrite(rightDown, LOW);
  digitalWrite(centerDown, HIGH);
  digitalWrite(leftDown, HIGH);
}

void displayFour()
{
  digitalWrite(center, HIGH);
  digitalWrite(leftUp, HIGH);
  digitalWrite(centerUp, LOW);
  digitalWrite(rightUp, HIGH);
  digitalWrite(rightDown, HIGH);
  digitalWrite(centerDown, LOW);
  digitalWrite(leftDown, LOW);
}

void displayFive()
{
  digitalWrite(center, HIGH);
  digitalWrite(leftUp, HIGH);
  digitalWrite(centerUp, HIGH);
  digitalWrite(rightUp, LOW);
  digitalWrite(rightDown, HIGH);
  digitalWrite(centerDown, HIGH);
  digitalWrite(leftDown, LOW);
}

void displaySix()
{
  digitalWrite(center, HIGH);
  digitalWrite(leftUp, HIGH);
  digitalWrite(centerUp, HIGH);
  digitalWrite(rightUp, LOW);
  digitalWrite(rightDown, HIGH);
  digitalWrite(centerDown, HIGH);
  digitalWrite(leftDown, LOW);
}

void displaySeven()
{
  digitalWrite(center, LOW);
  digitalWrite(leftUp, LOW);
  digitalWrite(centerUp, HIGH);
  digitalWrite(rightUp, HIGH);
  digitalWrite(rightDown, HIGH);
  digitalWrite(centerDown, LOW);
  digitalWrite(leftDown, LOW);
}

void displayEight()
{
  digitalWrite(center, HIGH);
  digitalWrite(leftUp, HIGH);
  digitalWrite(centerUp, HIGH);
  digitalWrite(rightUp, HIGH);
  digitalWrite(rightDown, HIGH);
  digitalWrite(centerDown, HIGH);
  digitalWrite(leftDown, HIGH);
}

void displayNine()
{
  digitalWrite(center, HIGH);
  digitalWrite(leftUp, HIGH);
  digitalWrite(centerUp, HIGH);
  digitalWrite(rightUp, HIGH);
  digitalWrite(rightDown, HIGH);
  digitalWrite(centerDown, LOW);
  digitalWrite(leftDown, LOW);
}

void loop() 
{
  int reading = analogRead(lightRead);
  Serial.println(reading);

  if (reading >= 0 && reading < 5)
  {
    displayZero();
  }
  else if (reading <= 5 && reading < 10)
  {
    displayOne();
  }
  else if (reading <= 10 && reading < 15)
  {
    displayTwo();
  }
  else if (reading <= 15 && reading < 20)
  {
    displayThree
  }
  else if (reading <= 15 && reading < 20)
  {
    displayFour();
  }
  else if (reading <= 15 && reading < 20)
  {
    displayFive();
  }
  else if (reading <= 15 && reading < 20)
  {
    displaySix();
  }
  else if (reading <= 15 && reading < 20)
  {
    displaySeven();
  }
  else if (reading <= 15 && reading < 20)
  {
    displayEight();
  }
  else if (reading <= 15 && reading < 20)
  {
    displayNine();
  }
  delay(1000);
}
