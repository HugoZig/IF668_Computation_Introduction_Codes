int botao = 2;
int sinalVerdePedestre = 7;
bool estadoLed = 0;

void setup(){
  pinMode(sinalVerdePedestre, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop(){
 digitalWrite(sinalVerdePedestre, LOW);
 delay(500);
 digitalWrite(sinalVerdePedestre, HIGH);
 delay(500);
   
}
