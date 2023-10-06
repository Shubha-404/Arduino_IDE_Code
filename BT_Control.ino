void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    char data=Serial.read();
    switch(data){
      case '1': digitalWrite(8,HIGH); break;
      // case '2': digitalWrite(8,LOW);  break;
      case '3': digitalWrite(9,HIGH);  break;
      // case '4': digitalWrite(9,LOW);  break;
      case '5': digitalWrite(10,HIGH);  break;
      // case '6': digitalWrite(10,LOW);  break;
      case '9': {
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH); 
        digitalWrite(10,HIGH); 
        break;
      }
      case '0': {
        digitalWrite(8,LOW);
        digitalWrite(9,LOW); 
        digitalWrite(10,LOW); 
        break;
      }
      default:  break;
    }
    Serial.println(data);
  }
  delay(100);
}
