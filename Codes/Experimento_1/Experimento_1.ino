
int botao = 2;
int ledVerde = 11;
int ledVermelho = 12;

void setup()
{
  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop()
{
  Serial.println(digitalRead(botao));

  if (digitalRead(botao) == 0){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
  }
  else{
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
  }
}
