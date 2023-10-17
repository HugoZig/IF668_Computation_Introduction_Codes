int botao = 2;
int a = 3;
int b = 4;
int f = 5;
int g = 6;
int c = 7;
int d = 8;
int e = 9;
int potenciometro = A0;
int contador = 0;
int valoresGuardados[4];


bool seven_seg_digits[10][7] ={
                 { 1,1,1,1,1,1,0 },  // = Digito 0
                 { 0,1,1,0,0,0,0 },  // = Digito 1
                 { 1,1,0,1,1,0,1 },  // = Digito 2
                 { 1,1,1,1,0,0,1 },  // = Digito 3
                 { 0,1,1,0,0,1,1 },  // = Digito 4
                 { 1,0,1,1,0,1,1 },  // = Digito 5
                 { 1,0,1,1,1,1,1 },  // = Digito 6
                 { 1,1,1,0,0,0,0 },  // = Digito 7
                 { 1,1,1,1,1,1,1 },  // = Digito 8
                 { 1,1,1,1,0,1,1 },  // = Digito 9
                 };
int i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);  
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(botao, INPUT_PULLUP);  
}

void loop() {
  int valorCaptado;

  valorCaptado = analogRead(potenciometro);

  if(valorCaptado >= 0 && valorCaptado <= 102) valorCaptado = 0;
  else if(valorCaptado >= 103 && valorCaptado <= 204) valorCaptado = 1;    
  else if(valorCaptado >= 205 && valorCaptado <= 307) valorCaptado = 2;  
  else if(valorCaptado >= 308 && valorCaptado <= 410) valorCaptado = 3;
  else if(valorCaptado >= 411 && valorCaptado <= 512) valorCaptado = 4;
  else if(valorCaptado >= 513 && valorCaptado <= 615) valorCaptado = 5;
  else if(valorCaptado >= 616 && valorCaptado <= 716 ) valorCaptado = 6;
  else if(valorCaptado >= 717 && valorCaptado <= 819) valorCaptado = 7;
  else if(valorCaptado >= 820 && valorCaptado <= 921) valorCaptado = 8;
  else if(valorCaptado >= 922 && valorCaptado <= 1023) valorCaptado = 9;

  switch(valorCaptado){
    case 0:
         i = 0;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
      break;
    
    case 1:
          i = 1;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
      break;
    case 2:
          i = 2;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
       break;
    case 3:
          i = 3;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
       break;
      
    case 4:
          i = 4;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
       break;
      
    case 5:
          i = 5;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
       break;
      
    case 6:
          i = 6;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
       break;
      
    case 7:
          i = 7;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
       break;
      
    case 8:
          i = 8;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
       break;
      
    case 9:
          i = 9;
  digitalWrite(a,seven_seg_digits[i][0]); 
  digitalWrite(b,seven_seg_digits[i][1]);
  digitalWrite(c,seven_seg_digits[i][2]);
  digitalWrite(d,seven_seg_digits[i][3]);
  digitalWrite(e,seven_seg_digits[i][4]);
  digitalWrite(f,seven_seg_digits[i][5]);
  digitalWrite(g,seven_seg_digits[i][6]);
       break;
          
default: break;
  }
  
  if(digitalRead(botao) == LOW && contador <= 4) {
     contador++;
     delay(500);
    valoresGuardados[contador-1] = valorCaptado;
    if(contador == 4){
      for(int j = 0; j < 4; j++){
      Serial.println(valoresGuardados[j], DEC);
      }
    }
  }
}
