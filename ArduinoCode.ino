#include <SoftwareSerial.h>
SoftwareSerial BTSerial(9,8);
int btn1;
  int btn2;
  int btn3;
  int btn4;
  int btn5;
  int btn6;
  int cnt = 0;
  bool a = false;
  bool b = false;
  bool c = false;
  bool d = false;
  bool e = false;
  bool f = false;
  int ent;
  char m;
  int s;

void setup() 
{
  BTSerial.begin(9600);
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  
}

void loop() 
{
  
 btn1 = digitalRead(7);
 btn2 = digitalRead(2);
 btn3 = digitalRead(3);
 btn4 = digitalRead(4);
 btn5 = digitalRead(5);
 btn6 = digitalRead(6);
 ent = digitalRead(10);
 s = digitalRead(11);
 
  if(btn1 == 1 && a == false) {
    cnt = cnt + 1; 
    btn1 = 0; 
    a = true;
  }
  if(btn2 == 1 && b == false) {
    cnt = cnt + 2;
    btn2 = 0;
    b = true;
  }
  if(btn3 == 1 && c == false) {
    cnt = cnt + 7; 
    btn3 = 0;
    c = true;
  }
  if(btn4 == 1 && d == false ) {
    cnt = cnt + 13;
    btn4 = 0;
    d = true;
  } 
  if(btn5 == 1 && e == false ) {
    cnt = cnt + 24;
    btn5 = 0;
    e = true;
    }
  if(btn6 == 1 && f == false ) {
    cnt = cnt + 49;
    btn6 = 0;
    f = true;
  }
 

if(cnt==1 && ent==1 && s==0) {cnt=100;a=false; b=false;c=false;  d=false;  e=false;  f=false; BTSerial.println("A"); ent=0;delay(100);}

if( cnt==100 && ent==1) {Serial.print("A");  ent=0; cnt=0;}

if(cnt==3 && ent==1&& s==0) {cnt=101;a=false;b=false; c=false;  d=false; e=false;  f=false; BTSerial.println("B"); ent=0; delay(100);}
if( cnt==101 && ent==1) {Serial.print("B");  ent=0; cnt=0;}

if(cnt==14 && ent==1&& s==0) {cnt=102;a=false; b=false;c=false; d=false;  e=false;  f=false; BTSerial.println("C"); ent=0;delay(100);}
if( cnt==102 && ent==1) {Serial.print("C");  ent=0; cnt=0;}

if(cnt==38 && ent==1&& s==0) {cnt=103;a=false;b=false;c=false; d=false;  e=false;  f=false;  BTSerial.println("D"); ent=0; delay(100);}
if( cnt==103 && ent==1) {Serial.print("D");  ent=0; cnt=0;}

if(cnt==25 && ent==1&& s==0) {cnt=104;a=false; b=false;c=false; d=false;  e=false;  f=false; BTSerial.println("E");  ent=0;delay(100);}
if( cnt==104 && ent==1) {Serial.print("E");  ent=0; cnt=0;}

if(cnt==16 && ent==1 && s==0) {cnt=105;a=false;b=false; c=false;  d=false; e=false; f=false; BTSerial.println("F");  ent=0;delay(100);}
if( cnt==105 && ent==1) {Serial.print("F");  ent=0; cnt=0;}

if(cnt==40 && ent==1&& s==0) {cnt=106;a=false; b=false;c=false; d=false; e=false; f=false; BTSerial.println("G"); ent=0;delay(100);}
if( cnt==106 && ent==1) {Serial.print("G");  ent=0; cnt=0;}

if(cnt==27 && ent==1&& s==0) {cnt=107;a=false;b=false;c=false; d=false;  e=false;  f=false;  BTSerial.println("H"); ent=0; delay(100);}
if( cnt==107 && ent==1) {Serial.print("H");  ent=0; cnt=0;}

if(cnt==15 && ent==1&& s==0) {cnt=108;a=false; b=false;c=false; d=false; e=false; f=false; BTSerial.println("I");  ent=0;delay(100);}
if( cnt==108 && ent==1) {Serial.print("I");  ent=0; cnt=0;}

if(cnt==39 && ent==1&& s==0) {cnt=109;a=false;b=false; c=false;  d=false; e=false;  f=false; BTSerial.println("J"); ent=0;delay(100);}
if( cnt==109 && ent==1) {Serial.print("J");  ent=0; cnt=0;}

if(cnt==8 && ent==1&& s==0) {cnt=110;a=false; b=false;c=false; d=false;  e=false;f=false; BTSerial.println("K"); ent=0;delay(100);}
if( cnt==110 && ent==1) {Serial.print("K");  ent=0; cnt=0;}

if(cnt==10 && ent==1&& s==0) {cnt=111;a=false;b=false;c=false; d=false;e=false; f=false;  BTSerial.println("L"); ent=0; delay(100);}
if( cnt==111 && ent==1) {Serial.print("L");  ent=0; cnt=0;}

if(cnt==21 && ent==1&& s==0) {cnt=112;a=false; b=false;c=false; d=false; e=false; f=false; BTSerial.println("M");  ent=0;delay(100);}
if( cnt==112 && ent==1) {Serial.print("M");  ent=0; cnt=0;}

if(cnt==45 && ent==1&& s==0) {cnt=113;a=false;b=false; c=false;  d=false; e=false; f=false; BTSerial.println("N");ent=0;delay(100);}
if( cnt==113 && ent==1) {Serial.print("N");  ent=0; cnt=0;}

if(cnt==32 && ent==1&& s==0) {cnt=114;a=false; b=false;c=false;d=false; e=false;f=false; BTSerial.println("O"); ent=0;delay(100);}
if( cnt==114 && ent==1) {Serial.print("O");  ent=0; cnt=0;}

if(cnt==23 && ent==1&& s==0) {cnt=115;a=false;b=false;c=false;d=false; e=false;  f=false; BTSerial.println("P"); ent=0; delay(100);}
if( cnt==115 && ent==1) {Serial.print("P");  ent=0; cnt=0;}

if(cnt==47 && ent==1&& s==0) {cnt=116;a=false; b=false;c=false; d=false; e=false; f=false; BTSerial.println("Q");  ent=0;delay(100);}
if( cnt==116 && ent==1) {Serial.print("Q");  ent=0; cnt=0;}

if(cnt==34 && ent==1&& s==0) {cnt=117;a=false;b=false; c=false; ; d=false; e=false; f=false; BTSerial.println("R"); ent=0;delay(100);}
if( cnt==117 && ent==1) {Serial.print("R");  ent=0; cnt=0;}

if(cnt==22 && ent==1&& s==0) {cnt=118;a=false; b=false;c=false; d=false; e=false; f=false; BTSerial.println("S"); ent=0;delay(100);}
if( cnt==118 && ent==1) {Serial.print("S");  ent=0; cnt=0;}

if(cnt==46 && ent==1&& s==0) {cnt=119;a=false;b=false;c=false;d=false;e=false; f=false;  BTSerial.println("T"); ent=0; delay(100);}
if( cnt==119 && ent==1) {Serial.print("T");  ent=0; cnt=0;}

if(cnt==57 && ent==1&& s==0) {cnt=120;a=false; b=false;c=false; d=false;  e=false;  f=false; BTSerial.println("U"); ent=0;delay(100);}
if( cnt==120 && ent==1) {Serial.print("U");  ent=0; cnt=0;}

if(cnt==59 && ent==1&& s==0) {cnt=121;a=false;b=false;c=false;d=false;e=false;f=false;  BTSerial.println("V"); ent=0; delay(100);}
if( cnt==121 && ent==1) {Serial.print("V");  ent=0; cnt=0;}

if(cnt==88 && ent==1&& s==0) {cnt=122;a=false; b=false;c=false; d=false; e=false; f=false; BTSerial.println("W"); ent=0;delay(100);}
if( cnt==122 && ent==1) {Serial.print("W");  ent=0; cnt=0;}

if(cnt==70 && ent==1&& s==0) {cnt=123;a=false;b=false;c=false;d=false;e=false; f=false;  BTSerial.println("X"); ent=0; delay(100);}
if( cnt==123 && ent==1) {Serial.print("X");  ent=0; cnt=0;}

if(cnt==94 && ent==1&& s==0) {cnt=124;a=false; b=false;c=false; d=false;  e=false;  f=false; BTSerial.println("Y"); ent=0;delay(100);}
if( cnt==124 && ent==1) {Serial.print("Y");  ent=0; cnt=0;}

if(cnt==81 && ent==1&& s==0) {cnt=125;a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("Z"); ent=0; delay(100);}
if( cnt==125 && ent==1) {Serial.print("Z");  ent=0; cnt=0;}

if(cnt==1 && ent==1 && s==1) {cnt=126; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("1"); ent=0; delay(100);}
if( cnt==126 && ent==1) {Serial.print("1");  ent=0; cnt=0;}

if(cnt==3 && ent==1 && s==1) {cnt=127; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("2"); ent=0; delay(100);}
if( cnt==127 && ent==1) {Serial.print("2");  ent=0; cnt=0;}

if(cnt==14 && ent==1 && s==1) {cnt=128; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("3"); ent=0; delay(100);}
if( cnt==128 && ent==1) {Serial.print("3");  ent=0; cnt=0;}

if(cnt==38 && ent==1 && s==1) {cnt=129; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("4"); ent=0; delay(100);}
if( cnt==129 && ent==1) {Serial.print("4");  ent=0; cnt=0;}

if(cnt==25 && ent==1 && s==1) {cnt=135; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("5"); ent=0; delay(100);}
if( cnt==135 && ent==1) {Serial.print("5");  ent=0; cnt=0;}

if(cnt==16 && ent==1 && s==1) {cnt=130; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("6"); ent=0; delay(100);}
if( cnt==130 && ent==1) {Serial.print("6");  ent=0; cnt=0;}

if(cnt==40 && ent==1 && s==1) {cnt=131; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("7"); ent=0; delay(100);}
if( cnt==131 && ent==1) {Serial.print("7");  ent=0; cnt=0;}

if(cnt==27 && ent==1 && s==1) {cnt=132; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("8"); ent=0; delay(100);}
if( cnt==132 && ent==1) {Serial.print("8");  ent=0; cnt=0;}

if(cnt==15 && ent==1 && s==1) {cnt=133; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("9"); ent=0; delay(100);}
if( cnt==133 && ent==1) {Serial.print("9");  ent=0; cnt=0;}

if(cnt==39 && ent==1 && s==1) {cnt=134; a=false;b=false;c=false;d=false; e=false;  f=false;  BTSerial.println("0"); ent=0; delay(100);}
if( cnt==134 && ent==1) {Serial.print("0");  ent=0; cnt=0;}

 delay(300);
}