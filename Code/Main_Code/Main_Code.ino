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

  if (reading >= 0 && reading < 5)
  {
    digitalWrite
  }
  delay(1000);
}
