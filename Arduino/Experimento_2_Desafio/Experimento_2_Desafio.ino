int potenciometro = A0;  
int ledVerde = 3;
int ledVermelho = 4;
int valorCaptado = 0;        

void setup() {
  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  digitalWrite(ledVermelho, HIGH);   
  digitalWrite(ledVerde, LOW);

  valorCaptado = analogRead(potenciometro);            
  if(valorCaptado <= 553 && valorCaptado >= 551){
      do{
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledVermelho, LOW);
        valorCaptado = analogRead(potenciometro); 
      }while(valorCaptado <= 553 && valorCaptado >= 551);
  }
  Serial.print(valorCaptado); 
  Serial.print("\n");     
}
