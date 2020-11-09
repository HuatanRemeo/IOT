int trigPin = 3;                  //Trig Pin
int echoPin = 2;                  //Echo Pin
int duration,distance;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);//設定13號埠作為輸出埠
  digitalWrite(13, HIGH); //讓燈開始時亮
  pinMode(trigPin, OUTPUT);        //Define inputs and outputs 
  pinMode(echoPin, INPUT);
}
char var;
void loop() {
  while (Serial.available() > 0) //當有訊號的時候
  {
    var = Serial.read();
    if (var == '0') //傳過來的是0
      digitalWrite(13, LOW);
    if (var == '1') //傳過來的是1
      digitalWrite(13, HIGH);
    if (var == '2') //傳過來的是1
      hs_04();
      
  }
}

void hs_04(){
  
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(duration*0.034/2);
  //Serial.print("Dystance=");
  Serial.print(distance);
  //Serial.print("cm");
  
  delay(500); 


  
  }
