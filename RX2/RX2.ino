#include <PinChangeInterruptHandler.h>
#include <RFReceiver.h>

#define arma       4
#define AFrente    3
#define ATras      5
#define BFrente    6
#define BTrase     9

int a[55] = {0};
int b[55] = {0};

// Listen on digital pin 2
RFReceiver receiver(2);

void setup() {
  Serial.begin(57600);
  receiver.begin();

  pinMode(AFrente, OUTPUT);
  pinMode(ATras, OUTPUT);
  pinMode(BFrente, OUTPUT);
  pinMode(BTrase, OUTPUT);
  pinMode(arma, OUTPUT);
}

void loop() {
  char msg[MAX_PACKAGE_SIZE];
  byte senderId = 0;
  byte packageId = 0;
  byte len = receiver.recvPackage((byte *)msg, &senderId, &packageId);
  String aux = "";
  Serial.println("");
  Serial.print("Package: ");
  Serial.println(packageId);
  Serial.print("Sender: ");
  Serial.println(senderId);
  Serial.print("Message: ");
  Serial.println(msg);
  Serial.println();

  for(int i = 0; i<= 4; i++){
    aux = aux + msg[i];
  }
  
Serial.println(aux);
  if(aux == "PPAP"){
    a[0]=0;
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, LOW);
  }
  if(aux == "PPAF"){
    a[0]=0;
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, HIGH);
  }
  if(aux == "FFAP"){
    if(a[1]<225){
      a[1]+=25; 
      b[1]+=10;
    }
    analogWrite(AFrente,  a[1]);
    analogWrite(ATras,    0);
    analogWrite(BFrente,  a[1]);
    analogWrite(BTrase,   0);
    digitalWrite(arma, LOW);
    Serial.println(a[1]);
  }else{
    a[1]=0;
    b[1]=0;
  }
  if(aux == "FEAP"){
    if(a[2]<225){
      a[2]+=25; 
      b[2]+=10;
    }
    analogWrite(AFrente,  a[2]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  b[2]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, LOW);
  }else{
    a[2]=0;
    b[2]=0;
  }
  if(aux == "FDAP"){
    if(a[3]<225){
      a[3]+=25; 
      b[3]+=10;
    }
    analogWrite(AFrente,  b[3]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  a[3]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, LOW);
  }else{
    a[3]=0;
    b[3]=0;
  }
  if(aux == "FFAF"){
   if(a[4]<225){
      a[4]+=25; 
      b[4]+=10;
    }
    analogWrite(AFrente,  a[4]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  a[4]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, HIGH);
  }else{
    a[4]=0;
    b[4]=0;
  }
  if(aux == "FEAF"){
    if(a[5]<225){
      a[5]+=25; 
      b[5]+=10;
    }
    analogWrite(AFrente,  a[5]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  b[5]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, HIGH);
  }else{
    a[5]=0;
    b[5]=0;
  }
  if(aux == "FDAF"){
    if(a[6]<225){
      a[6]+=25; 
      b[6]+=10;
    }
    analogWrite(AFrente,  b[6]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  a[6]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, HIGH);
  }else{
    a[6]=0;
    b[6]=0;
  }
  if(aux == "TTAF"){
    if(a[7]<225){
      a[7]+=25; 
      b[7]+=10;
    }
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    a[7]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   a[7]);
    digitalWrite(arma, HIGH);
  }else{
    a[7]=0;
    b[7]=0;
  }
  if(aux == "TEAF"){
    if(a[8]<225){
      a[8]+=25; 
      b[8]+=10;
    }
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    b[8]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   a[8]);
    digitalWrite(arma, HIGH);
  }else{
    a[8]=0;
    b[8]=0;
  }
  if(aux == "TDAF"){
   if(a[9]<225){
      a[9]+=25; 
      b[9]+=10;
    }
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    a[9]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   b[9]);
    digitalWrite(arma, HIGH);
  }else{
    a[9]=0;
    b[9]=0;
  }
  if(aux == "TTAP"){
    if(a[10]<225){
      a[10]+=25; 
      b[10]+=10;
    }
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    a[10]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   a[10]);
    digitalWrite(arma, LOW);
  }else{
    a[10]=0;
    b[10]=0;
  }
  if(aux == "TEAP"){
    if(a[11]<225){
      a[11]+=25; 
      b[11]+=10;
    }
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    b[11]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   a[11]);
    digitalWrite(arma, LOW);
  }else{
    a[11]=0;
    b[11]=0;
  }
  if(aux == "TDAP"){
   if(a[12]<225){
      a[12]+=25; 
      b[12]+=10;
    }
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    a[12]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   b[12]);
    digitalWrite(arma, LOW);
  }else{
    a[12]=0;
    b[12]=0;
  }
  if(aux == "DDAP"){
    if(a[13]<225){
      a[13]+=25; 
      b[13]+=10;
    }
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    a[13]);
    analogWrite(BFrente,  a[13]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, LOW);
  }else{
    a[13]=0;
    b[13]=0;
  }
  if(aux == "EEAP"){
    if(a[14]<225){
      a[14]+=25; 
      b[14]+=10;
    }
    analogWrite(AFrente,  a[14]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   a[14]);
    digitalWrite(arma, LOW);
  }else{
    a[14]=0;
    b[14]=0;
  }
  if(aux == "DDAF"){
    if(a[15]<225){
      a[15]+=25; 
      b[15]+=10;
    }
    analogWrite(AFrente,  a[0]);
    analogWrite(ATras,    a[15]);
    analogWrite(BFrente,  a[15]);
    analogWrite(BTrase,   a[0]);
    digitalWrite(arma, HIGH);
  }else{
    a[15]=0;
    b[15]=0;
  }
  if(aux == "EEAF"){
    if(a[16]<225){
      a[16]+=25; 
      b[16]+=10;
    }
    analogWrite(AFrente,  a[16]);
    analogWrite(ATras,    a[0]);
    analogWrite(BFrente,  a[0]);
    analogWrite(BTrase,   a[16]);
    digitalWrite(arma, HIGH);
  }else{
    a[16]=0;
    b[16]=0;
  }
}
