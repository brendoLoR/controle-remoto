#include <RFTransmitter.h>

#define NODE_ID          1
#define OUTPUT_PIN       4
#define frente           16
#define tras             5
#define esquerda         14
#define direita          12
#define armaFrente       13
#define armaTras         0
char *msg = "";
// Send on digital pin 11 and identify as node 1
RFTransmitter transmitter(OUTPUT_PIN, NODE_ID);

void setup() {
  Serial.begin(57600);
  Serial.println(digitalRead(armaTras));
  pinMode(frente, INPUT);
  pinMode(tras, INPUT);
  pinMode(esquerda, INPUT);
  pinMode(direita, INPUT);
  pinMode(armaFrente, INPUT);
  pinMode(armaTras, INPUT);
  }

void loop() {
  char *msg = msg;
  //transmitter.send((byte *)msg, strlen(msg) + 1);
  delay(1);
  
  if (digitalRead(frente) == 0 && digitalRead(tras) == 0 && digitalRead(esquerda) == 0 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 0 ) {
    msg = "PPAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoPPAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 1 && digitalRead(tras) == 0 && digitalRead(esquerda) == 0 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 0 ) {
    msg = "FFAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoFFAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 1 && digitalRead(esquerda) == 0 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 0 ) {
    msg = "TTAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoTTAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 0 && digitalRead(esquerda) == 1 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 0 ) {
    msg = "EEAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoEEAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 0 && digitalRead(esquerda) == 0 && digitalRead(direita) == 1 && digitalRead(armaFrente) == 0 ) {
    msg = "DDAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoDDAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 1 && digitalRead(tras) == 0 && digitalRead(esquerda) == 1 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 0 ) {
    msg = "FEAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoFEAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 1 && digitalRead(tras) == 0 && digitalRead(esquerda) == 0 && digitalRead(direita) == 1 && digitalRead(armaFrente) == 0 ) {
    msg = "FDAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoFDAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 1 && digitalRead(esquerda) == 1 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 0 ) {
    msg = "TEAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoTEAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 1 && digitalRead(esquerda) == 0 && digitalRead(direita) == 1 && digitalRead(armaFrente) == 0 ) {
    msg = "TDAP";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoTDAP");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }


  // arma ligada frente



  if (digitalRead(frente) == 0 && digitalRead(tras) == 0 && digitalRead(esquerda) == 0 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 1 ) {
    msg = "PPAF";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoPPAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 1 && digitalRead(tras) == 0 && digitalRead(esquerda) == 0 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 1 ) {
    msg = "FFAF";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoFFAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 1 && digitalRead(esquerda) == 0 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 1 ) {
    msg = "TTAF";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoTTAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 0 && digitalRead(esquerda) == 1 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 1 ) {
    msg = "EEAF";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoEEAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 0 && digitalRead(esquerda) == 0 && digitalRead(direita) == 1 && digitalRead(armaFrente) == 1 ) {
    msg = "DDAF";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoDDAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 1 && digitalRead(tras) == 0 && digitalRead(esquerda) == 1 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 1 ) {
    msg = "FEAF";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoFEAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 1 && digitalRead(tras) == 0 && digitalRead(esquerda) == 0 && digitalRead(direita) == 1 && digitalRead(armaFrente) == 1 ) {
    msg = "FDAF";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoFDAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 1 && digitalRead(esquerda) == 1 && digitalRead(direita) == 0 && digitalRead(armaFrente) == 1 ) {
    msg = "TEAF";
   transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoTEAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  if (digitalRead(frente) == 0 && digitalRead(tras) == 1 && digitalRead(esquerda) == 0 && digitalRead(direita) == 1 && digitalRead(armaFrente) == 1 ) {
    msg = "TDAF";
    transmitter.send((byte *)msg, strlen(msg) + 1);
      //Serial.println("EnviandoTDAF");
     // transmitter.waitPacketSent(); 
    //delay(0);
  }
  
//  char *msg = "Hello World!";
//  transmitter.send((byte *)msg, strlen(msg) + 1);
//  
//  delay(5000);
//  
//  transmitter.resend((byte *)msg, strlen(msg) + 1);
}
