int reed_kontakt = 15;
int LEDRot = 5;
int LEDGruen = 12;
int status;

void setup() 
{
  pinMode(reed_kontakt, INPUT);
  pinMode(LEDRot, OUTPUT);
  pinMode(LEDGruen, OUTPUT);
}

void loop() 
{
  status = digitalRead(reed_kontakt);

  if (status == HIGH)
  {
    digitalWrite(LEDGruen, LOW);
    digitalWrite(LEDRot, HIGH);
  }

  else
  {
    digitalWrite(LEDGruen, HIGH);
    digitalWrite(LEDRot, LOW);
  }
}
