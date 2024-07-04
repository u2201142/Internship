int ledpin1 = 8;
int ledpin2 = 4;
int ledpin3 = 2;
void setup()
{
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
}

void loop()
{
  digitalWrite(ledpin1, HIGH);
  delay(3000); 
  digitalWrite(ledpin1, LOW);
  digitalWrite(ledpin2, HIGH);
  delay(3000); 
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, HIGH);
  delay(3000);
  digitalWrite(ledpin3, LOW);
}