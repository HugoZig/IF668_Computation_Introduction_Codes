int ledVermelho = 11;
int ledVerde = 12;
int ledAmarelo = 13;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   if (Serial.available() > 0){
    int entrada = Serial.read();

    switch(entrada){
        case 48: 
            digitalWrite(ledAmarelo, HIGH);  
            digitalWrite(ledVermelho, LOW);
            digitalWrite(ledVerde, LOW);

            break;
        case 49:
            digitalWrite(ledAmarelo, LOW);
            digitalWrite(ledVermelho, LOW);
            digitalWrite(ledVerde, HIGH);

            break;
        case 50:
            digitalWrite(ledAmarelo, LOW);  
            digitalWrite(ledVermelho, HIGH);
            digitalWrite(ledVerde, LOW);
            break;
        default: break;
    }
   }

}
