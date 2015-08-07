char value;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  value = 'a';
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() > 0) {
    char retval = 'a';
    char option = Serial.read();
    if(Serial.read() == '\n' || Serial.read() == '\r') { // check for newline to proceed
      switch(option) {
        case 'r' : retval = readSerial(); 
                   Serial.write(retval); break;
        case 'w' : writeSerial(); break;
      }
    }
  }
}

char readSerial() {
  return value;
}

void writeSerial() {
  value++;
}

