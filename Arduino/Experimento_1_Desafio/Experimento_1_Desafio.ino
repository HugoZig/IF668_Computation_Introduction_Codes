int botao = 2;
int sinalVermelhoRua = 5;
int sinalAmareloRua = 6;
int sinalVerdeRua = 7;
int sinalVermelhoPedestre = 9;
int sinalVerdePedestre = 8;
int tempoEspera = 30000;

void setup() {
  pinMode(sinalVermelhoRua, OUTPUT);
  pinMode(sinalAmareloRua, OUTPUT);
  pinMode(sinalVerdeRua, OUTPUT);
  pinMode(sinalVermelhoPedestre, OUTPUT);
  pinMode(sinalVerdePedestre, OUTPUT);
  pinMode(botao, INPUT_PULLUP);  
}

void sinalRuaVerde();
void transicaoSinalVerdeParaVermelhoRua();
void sinalPedestreVerde();
void avisoSinalPedestre();

void loop()
{
  int a = 300; 
  int flag = 0;

  sinalRuaVerde();

for(int i = 0; i < a; i++){
  delay(100);
  if(digitalRead (botao) == LOW && flag == 0){
    a = (i+a)/2; 
    flag = 1;
  }
}

transicaoSinalVerdeParaVermelhoRua();


sinalPedestreVerde();

avisoSinalPedestre();
}

void sinalRuaVerde(){
  digitalWrite(sinalVermelhoPedestre, HIGH);
  digitalWrite(sinalVerdePedestre, LOW);
  digitalWrite(sinalVermelhoRua, LOW);  
  digitalWrite(sinalAmareloRua, LOW);
  digitalWrite(sinalVerdeRua, HIGH); 
}

void transicaoSinalVerdeParaVermelhoRua(){
  

  digitalWrite(sinalVermelhoPedestre, HIGH);
  digitalWrite(sinalVerdePedestre, LOW);
  digitalWrite(sinalVermelhoRua, LOW);  
  digitalWrite(sinalAmareloRua, HIGH);
  digitalWrite(sinalVerdeRua, LOW);

  delay(1500);


  digitalWrite(sinalVermelhoPedestre, LOW);
  digitalWrite(sinalVerdePedestre, HIGH);
  digitalWrite(sinalVermelhoRua, HIGH);  
  digitalWrite(sinalAmareloRua, LOW);
  digitalWrite(sinalVerdeRua, LOW);
  
}

void sinalPedestreVerde(){
  digitalWrite(sinalVermelhoPedestre, LOW);
  digitalWrite(sinalVerdePedestre, HIGH);
  digitalWrite(sinalVermelhoRua, HIGH);  
  digitalWrite(sinalAmareloRua, LOW);
  digitalWrite(sinalVerdeRua, LOW);

  delay(20000);
  digitalWrite(sinalVermelhoRua, LOW);
  delay(250);  
  digitalWrite(sinalVermelhoRua, HIGH);  
  delay(5000); 
}

void avisoSinalPedestre(){
 for(int i = 0; i < 7; i++){
 digitalWrite(sinalVerdePedestre, LOW);
 delay(500);
 digitalWrite(sinalVerdePedestre, HIGH);
 delay(500);
 }

  
}
