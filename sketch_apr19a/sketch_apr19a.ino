#include <LiquidCrystal.h>
#include <stdlib.h>
#include <string.h>

int t=-1,u=0;
int i;
int tmp;
int ctrl=0;
int ctrl2=0;
float paratut;
    int a[3]={20,20,10};
    int a1[3]={0,0,0};
int secim1=0,secim2=0,secim3=0,secim4=0,secim5=0,bir=0,elli=0,yirmibes=0;
double bakiye=0;
char su[5][20]={"1,su,30","2,cay,20","3,kahve,15","4,cikolata,50","5,biskuvi,100"};
const int buttonPin  = 3;     
const int button1Pin = 4;   
const int button2Pin  = 5;     // buton portları
const int button3Pin = 6;  
const int button4Pin  = 7;    
const int button5Pin  = 38;  
const int button6Pin  = 19;
const int button7Pin  = 18;
const int button8Pin  = 29;
const int button9Pin  = 28; 
const int button10Pin = 10;   

const int led1Pin=13;
const int led2Pin=34;
  int buttonState = 0;  
  int button1State = 0;
  int button2State = 0;  
  int button3State = 0;     //buton başlangıç durumları
  int button4State = 0;  
  int button5State = 0;
  int button6State = 0;
  int button7State = 0;
  int button8State = 0;
  int button9State = 0;
  int button10State=0;
  double para=0;
const int rs = 12, en = 11, d4 = 23, d5 = 24, d6 = 25, d7 = 26;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int stokkontrol(int urun){//stok kontrolü
   char tmp1[4];
  int sayac=0;
  char deneme[20];
  char tut[4];
  int sayi;
  t=-1;
  int tmp;
if(urun==2){
  sayac=0;
  sayi=0;
     for (i=0;su[1][i]!='\0';i++){
    if(sayac==2&&isdigit(su[1][i])){
    t++;
    tut[t]=su[1][i];
  }
  if(su[1][i]==','){
    sayac++;
  } 
}
sayi=atoi(tut);
} 
if(urun==1){
  sayac=0;
     for (i=0;su[0][i]!='\0';i++){
    if(sayac==2&&isdigit(su[0][i])){
    t++;
    tut[t]=su[0][i];
    
  }
  if(su[0][i]==','){
    sayac++;
  }
}
sayi=atoi(tut);
}
if(urun==3){
  
  sayac=0;
     for (i=0;su[2][i]!='\0';i++){
    if(sayac==2&&isdigit(su[2][i])){
    t++;
    tut[t]=su[2][i];
    
  }
  if(su[2][i]==','){
    sayac++;
  }
   
}
sayi=atoi(tut);
}
if(urun==4){
  sayac=0;
     for (i=0;su[3][i]!='\0';i++){
    if(sayac==2&&isdigit(su[3][i])){
    t++;
    tut[t]=su[3][i];
    
  }
  if(su[3][i]==','){
    sayac++;
  } 
}
sayi=atoi(tut);
}
if(urun==5){
  sayac=0;
     for (i=0;su[4][i]!='\0';i++){
    if(sayac==2&&isdigit(su[4][i])){
    t++;
    tut[t]=su[4][i];
    
  }
  if(su[4][i]==','){
    sayac++;
  } 
}
sayi=atoi(tut);
}

return sayi;
}

void stok(int urun){//stok düzenleme
  char tmp1[4];
  int sayac=0;
  char deneme[20];
  char tut[4];
  int sayi;
  t=-1;
  int tmp;
if(urun==2){
  sayac=0;
  sayi=0;
     for (i=0;su[1][i]!='\0';i++){
    if(sayac==2&&isdigit(su[1][i])){
    t++;
    tut[t]=su[1][i];
  }
  if(su[1][i]==','){
    sayac++;
  } 
     Serial.print(a[0]);
   Serial.print(",");
   Serial.print(a[1]);
   Serial.print(",");
   Serial.println(a[2]);
   Serial.println(su[0]);
   Serial.println(su[1]);
   Serial.println(su[2]);
   Serial.println(su[3]);
   Serial.println(su[4]);
}
sayi=atoi(tut);
sayi-=secim2;
if(sayi<10){
  for(i=7;su[1][i]!='\0';i++){
    su[1][i-1]=su[1][i];
    su[1][i]='\0';
  }
  itoa(sayi,tmp1,10);
  su[1][6]=tmp1[0];
}else if(sayi<100){
  for(i=7;su[1][i]!='\0';i++){
    su[1][i-1]=su[1][i];
    su[1][i]='\0';
  }

itoa(sayi,tmp1,10);
  su[1][6]=tmp1[0];
  su[1][7]=tmp1[1];  
}
for(i=0;su[1][i]!='\0';i++){
    deneme[i]=su[1][i];   
}
lcd.clear();
delay(1000);
} 
if(urun==1){
  sayac=0;
     for (i=0;su[0][i]!='\0';i++){
    if(sayac==2&&isdigit(su[0][i])){
    t++;
    tut[t]=su[0][i];
    
  }
  if(su[0][i]==','){
    sayac++;
  }
   
}
sayi=atoi(tut);
sayi-=secim1;

if(sayi<10){
  for(i=6;su[0][i]!='\0';i++){
    su[0][i-1]=su[0][i];
    su[0][i]='\0';
  }
  itoa(sayi,tmp1,10);
  su[0][5]=tmp1[0];
}else if(sayi<100){
  for(i=6;su[0][i]!='\0';i++){
    su[0][i-1]=su[0][i];
    su[0][i]='\0';
  }
itoa(sayi,tmp1,10);
  su[0][5]=tmp1[0];
  su[0][6]=tmp1[1];

}
for(i=0;su[0][i]!='\0';i++){
    deneme[i]=su[0][i];   
}
lcd.clear();
delay(1000);

}
if(urun==3){
  
  sayac=0;
     for (i=0;su[2][i]!='\0';i++){
    if(sayac==2&&isdigit(su[2][i])){
    t++;
    tut[t]=su[2][i];
    
  }
  if(su[2][i]==','){
    sayac++;
  }
   
}
sayi=atoi(tut);
sayi-=secim3;

if(sayi<10){
  for(i=9;su[2][i]!='\0';i++){
    su[2][i-1]=su[2][i];
    su[2][i]='\0';
  }
  itoa(sayi,tmp1,10);
  su[2][8]=tmp1[0];
}else if(sayi<100){
  for(i=9;su[2][i]!='\0';i++){
    su[2][i-1]=su[0][i];
    su[2][i]='\0';
  }
itoa(sayi,tmp1,10);
  su[2][8]=tmp1[0];
  su[2][9]=tmp1[1];
}

for(i=0;su[3][i]!='\0';i++){
    deneme[i]=su[3][i];   
}
lcd.clear();
delay(1000);
}
if(urun==4){
  sayac=0;
     for (i=0;su[3][i]!='\0';i++){
    if(sayac==2&&isdigit(su[3][i])){
    t++;
    tut[t]=su[3][i];
    
  }
  if(su[3][i]==','){
    sayac++;
  } 
}
sayi=atoi(tut);
sayi-=secim4;

if(sayi<10){
  for(i=12;su[3][i]!='\0';i++){
    su[3][i-1]=su[3][i];
    su[3][i]='\0';
  }
  itoa(sayi,tmp1,10);
  su[3][11]=tmp1[0];
}else if(sayi<100){
  for(i=13;su[2][i]!='\0';i++){
    su[3][i-1]=su[3][i];
    su[3][i]='\0';
  }
itoa(sayi,tmp1,10);
  su[3][11]=tmp1[0];
  su[3][12]=tmp1[1];

}

for(i=0;su[3][i]!='\0';i++){
    deneme[i]=su[3][i];   
}
lcd.clear();
delay(1000);
}
if(urun==5){
  sayac=0;
     for (i=0;su[4][i]!='\0';i++){
    if(sayac==2&&isdigit(su[4][i])){
    t++;
    tut[t]=su[4][i];
    
  }
  if(su[4][i]==','){
    sayac++;
  } 
}
sayi=atoi(tut);
sayi-=secim5;

if(sayi<10){
  for(i=11;su[4][i]!='\0';i++){
    su[4][i-1]=su[4][i];
    su[4][i]='\0';
  }
  itoa(sayi,tmp1,10);
  su[4][10]=tmp1[0];
}else if(sayi<100){
  for(i=12;su[4][i]!='\0';i++){
    su[4][i-1]=su[4][i];
    su[4][i]='\0';
  }
itoa(sayi,tmp1,10);
  su[4][10]=tmp1[0];
  su[4][11]=tmp1[1];

}
for(i=0;su[5][i]!='\0';i++){
    deneme[i]=su[5][i];   
}
lcd.clear();
delay(1000);
}
}
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(button1Pin, INPUT_PULLUP); 
  pinMode(button2Pin, INPUT_PULLUP); 
  pinMode(button3Pin, INPUT_PULLUP);      //butondan değer alma
  pinMode(button4Pin, INPUT_PULLUP);  
  pinMode(button5Pin, INPUT_PULLUP);
  pinMode(button6Pin, INPUT_PULLUP);
  pinMode(button7Pin, INPUT_PULLUP);
  pinMode(button8Pin, INPUT_PULLUP);
  pinMode(button9Pin, INPUT_PULLUP);  
  pinMode(button10Pin,INPUT_PULLUP);
  pinMode(led1Pin,OUTPUT);
  pinMode(led2Pin,OUTPUT);
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("HOSGELDINIZ");
}

void loop() {

  buttonState  = digitalRead(buttonPin);
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);   //lcd portları
  button3State = digitalRead(button3Pin);
  button4State = digitalRead(button4Pin);
  button5State = digitalRead(button5Pin);
  button6State = digitalRead(button6Pin);
  button7State = digitalRead(button7Pin);
  button8State = digitalRead(button8Pin);
  button9State = digitalRead(button9Pin);
  button10State= digitalRead(button10Pin);
  if (buttonState == LOW && ctrl2==0) {     
    // turn LED on:    
     lcd.clear();
         lcd.setCursor(0,0);
    lcd.print("Girilen para:");
    lcd.setCursor(0, 1);
    bir++;
    para+=1;
    delay(250);
      
    lcd.print(para);
    buttonState=1;
  }
  if(button1State==LOW  && ctrl2==0) {
    // turn LED off:
     lcd.clear();
         lcd.setCursor(0,0);
    lcd.print("Girilen para:");
    lcd.setCursor(0, 1);
    elli++;
    para+=0.5;
    delay(250);
    lcd.print(para);  
    
    button1State=1;
  }
  if (button2State == LOW && ctrl2==0) {     
    // turn LED on:    
    lcd.clear();
        lcd.setCursor(0,0);
    lcd.print("Girilen para:");
    lcd.setCursor(0, 1);
    yirmibes++;
    para+=0.25;
    
    delay(250);
    lcd.print(para);     
    button2State=1;
  }
  if(button3State==LOW) {
    // turn LED off:
    lcd.clear();
lcd.setCursor(0,0);
  int sikisma=random(0,5);
  if(sikisma==2){
    lcd.clear();
    lcd.print("Para takildi.");
    digitalWrite(led2Pin,HIGH);
    delay(2500);
    digitalWrite(led2Pin,LOW);
    secim1=0; 
    secim2=0;
    secim3=0;
    secim4=0;
    secim5=0;
    para=0;
    ctrl2=0;
     a1[0]=0;
    bir=0;
     a1[1]=0;
    elli=0;
     a1[2]=0;
    yirmibes=0;
    lcd.setCursor(0, 0);
    lcd.print(bakiye);
    bakiye=0;
    lcd.print("tl odendi");
    delay(2500);
  }else{
    digitalWrite(led1Pin,HIGH);
    delay(2500);
    digitalWrite(led1Pin,LOW);
      if(secim1>0){
  stok(1);
}
if(secim2>0){
  stok(2);
}
if(secim3>0){
  stok(3);
}
if(secim4>0){
  stok(4);
}
if(secim5>0){
  stok(5);
}
    lcd.setCursor(0, 1);

    paratut=para;
    for(i=0;para!=0;i++){
   if(a[0]!=0 && para>=1){
    para-=1;
 //   tmp=a[0];
 //   tmp--;
  //  a[0]=tmp;
    tmp=a1[0];
    tmp++;
    a1[0]=tmp;
  }
  else if(a[1]!=0&&para>=0.5){
    
    para-=0.5;
  //  tmp=a[1];
 //   tmp--;
 //   a[1]=tmp;
    tmp=a1[1];
    tmp++;
    a1[1]=tmp;
  }
    else if(a[2]!=0&&para>=0.25){
    para-=0.25;
  //  tmp=a[2];
  //  tmp--;
  //  a[2]=tmp;
    tmp=a1[2];
    tmp++;
    a1[2]=tmp;
  }
  if(a[0]==0&&a[1]==0&&a[2]==0&&para>0){
    ctrl=1;
    break;
  }
}
    
    if(ctrl==0){
    lcd.setCursor(0,0);
    lcd.print("Para ustu:");
    para=a1[0]*1+a1[1]*0.5+a1[2]*0.25;
    lcd.print(para);
    lcd.setCursor(0,1);
    lcd.print("1-");
    tmp=a1[0];
    lcd.print(tmp);
    lcd.print(" ");
    lcd.print("0.5-");
    tmp=a1[1];    
    lcd.print(tmp);
    lcd.print(" ");
    lcd.print("0.25-");
    tmp=a1[2];    
    lcd.print(tmp);
    tmp=a[0];
    tmp-=a1[0];
    tmp+=bir;
    a[0]=tmp;
    a1[0]=0;
    bir=0;
    tmp=a[1];
    tmp-=a1[1];
    tmp+=elli;
    a[1]=tmp;
    a1[1]=0;
    elli=0;
     tmp=a[2];
    tmp-=a1[2];
    tmp+=yirmibes;
    a[2]=tmp;
    a1[2]=0;
    yirmibes=0;
    }else{
      lcd.print("Yeterli para yok");
    }
    delay(2500);
    para=0;
    secim1=0;
    secim2=0;
    secim3=0;
    secim4=0;
    secim5=0;
    ctrl2=0;
   Serial.print(a[0]);
   Serial.print(",");
   Serial.print(a[1]);
   Serial.print(",");
   Serial.println(a[2]);
   Serial.println(su[0]);
   Serial.println(su[1]);
   Serial.println(su[2]);
   Serial.println(su[3]);
   Serial.println(su[4]);
  delay(500);
  }
    lcd.clear();
    lcd.print("Hosgeldiniz");
  }
  
  if (button4State == LOW&& ctrl2==1) {        
    int stok=stokkontrol(1); 
    lcd.clear();
    if(stok>0&&para>=0.5){
    secim1++;
    lcd.setCursor(0,0);
    lcd.print("Urun:Su");   
    para-=0.5;
    lcd.setCursor(0, 1);
    lcd.print("Paraustu:");
    lcd.print(para);  
    }else if(para<=0.49){
      lcd.clear();
      lcd.print("Yetersiz bakiye");
      
  }else if(stok==0||stok<secim1) {
    lcd.clear();
    lcd.print("Stokta yok");
  }
   button4State=0;
   delay(250);
  }
  if (button5State == LOW&&ctrl2==1) {     
    int stok=stokkontrol(2);     
    lcd.clear();
    if(stok>0&&para>=1){
    secim2++;
    lcd.setCursor(0,0);
    lcd.print("Urun:Cay");
    para-=1; 
    lcd.setCursor(0, 1);
    lcd.print("Paraustu:");
    lcd.print(para);
    }else if(para<=0.99){
      lcd.print("Yetersiz bakiye");
  }else if(stok==0||stok<secim2){
    lcd.print("Stokta yok");
  }
    delay(250);  
    button5State=1;
  }
  if (button6State == LOW&&ctrl2==1) {     
    int stok=stokkontrol(3);     
    lcd.clear();
    if(stok>0&&para>=1.5){
    secim3++;
    lcd.setCursor(0,0);
    lcd.print("Urun:Kahve");
    para-=1.5; 
    lcd.setCursor(0, 1);
    lcd.print("Paraustu:");
    lcd.print(para);
    }else if(para<=1.49){
      lcd.print("Yetersiz bakiye");
  }else if(stok==0||stok<secim3) {
    lcd.print("Stokta yok");
  }
    delay(250);   
    button6State=1;
  }
  if (button7State == LOW&&ctrl2==1) {         
   int stok=stokkontrol(4);     
    lcd.clear();
    if(stok>0&&para>=1.75){
    secim4++;
    lcd.setCursor(0,0);
    lcd.print("Urun:Cikolata");
    para-=1.75; 
    lcd.setCursor(0, 1);
    lcd.print("paraustu:");
    lcd.print(para);
    }else if(para<=1.74){
      lcd.print("Yetersiz bakiye");
  }else if(stok==0||stok<secim4){
    lcd.print("Stokta yok");
  }
    delay(250);  
    button7State=1;
  }
 if (button8State == LOW&&ctrl2==1) {     
    // turn LED on:    
   int stok=stokkontrol(5);     
    lcd.clear();
    if(stok>0&&para>=2){
    secim5++;
    lcd.setCursor(0,0);
    lcd.print("Urun:Biskuvi");
    para-=2; 
    lcd.setCursor(0, 1);
    lcd.print("paraustu:");
    lcd.print(para);
    }else if(para<=1.99){
      lcd.print("Yetersiz bakiye");
  }else if(stok==0||stok<secim5){
    lcd.print("Stokta yok");
  }
    delay(250);  
    button8State=1;
  }
  if (button9State == LOW) {     
    // turn LED on:    
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Bakiyeniz:");  
    lcd.setCursor(0,1);
    lcd.print(para);
    bakiye=para;
    ctrl2=1;
    button9State=1;
  }
  if (button10State == LOW) {     
    // turn LED on:    
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Resetlendi"); 
    secim1=0; 
    secim2=0;
    secim3=0;
    secim4=0;
    secim5=0;
    para=0;
    ctrl2=0;
     a1[0]=0;
    bir=0;
     a1[1]=0;
    elli=0;
     a1[2]=0;
    yirmibes=0;
    lcd.setCursor(0, 0);
    lcd.print(bakiye);
    bakiye=0;
    lcd.print("tl odendi");
    delay(2500);
    lcd.clear();
    lcd.print("Hosgeldiniz");
    button10State=1;
  }
}
