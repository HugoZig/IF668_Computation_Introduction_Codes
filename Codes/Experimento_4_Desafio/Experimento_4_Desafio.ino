int botao = 2;
int a = 3;
int b = 4;
int f = 5;
int g = 6;
int c = 7;
int d = 8;
int e = 9;
int potenciometro = A0;
int contador = 0, contador2 = 0, contador3 =0;
int flag = 0, flag2 = 0, flag3 = 0, flag4 = 0;
int tamanho = -1;
int ledVerde = 10;
int ledVermelho = 11;
int *ponteiro;
int *ponteiro2;


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
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  int valorCaptado;
    
    if (flag4 == 1) {  // se flag4 == 1 , significa que o programa rodou por completo, então resetamos todas as variaveis
        contador = 0;
        contador2 = 0;
        contador3 = 0;
        flag = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        tamanho = -1;
    }

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

  if(digitalRead(botao) == LOW && flag == 0 && valorCaptado != 0) {
    tamanho = valorCaptado;
    delay(500);
    ponteiro = (int*) malloc(sizeof(int) * tamanho); if(ponteiro == NULL){ exit(1);}
    ponteiro2 = (int*) malloc(sizeof(int) * tamanho); if(ponteiro2 == NULL){ exit(1);}
    flag = 1; // setamos o flag para 1, pois assim ele n podera entrar de novo nessa condicao ate que o programa resete
  }
    
  if(digitalRead(botao) == LOW && flag == 1 && contador < tamanho){ // o programa nao entrara mais nessa condicao assim que o contador == tamnho
    delay(500);
    ponteiro[contador] = valorCaptado;
    contador++;
  }

  if(contador == tamanho && digitalRead(botao) == LOW && contador2 < tamanho){ // essa condicao so sera contemplada quando a anterior nao for mais
    delay(500);
    ponteiro2[contador2] = valorCaptado;
    contador2++;
    }

  if(contador2 == tamanho){  // quando o contador2 == tamanho, o if anterior parara e entrara nessa condicao
        flag2 = 1; // flag2 e igualado a um para entrar nas condicoes abaixo
  }

  for(int k = 0; flag2 == 1 && k < tamanho; k++){
    if(ponteiro2[k] == ponteiro[k]) {}
    else contador3++; 
  }

  if (contador3 == 0 && flag2 == 1){
    flag3 = 1; // flag3 = 1 para indicar que algum led foi ligado e desligado e agora precisamos apenas resetar o programa
    digitalWrite(ledVerde, HIGH);
    delay(5000);
    digitalWrite(ledVerde, LOW);
  }
  else if(flag2 == 1 && contador3 != 0){
      digitalWrite(ledVermelho, HIGH);
      delay(5000);
      flag3 = 1; // flag3 = 1 para indicar que algum led foi ligado e desligado e agora precisamos apenas resetar o programa
      digitalWrite(ledVermelho, LOW);
  }

  if(flag3 == 1){ //quando flag3 == 1, significa que o programa terminou e apenas precisamos liberar a memoria alocada e setar o flag4 = 1, para resetar o programa
    free(ponteiro);
    free(ponteiro2);
    flag4 = 1;
  }
}
