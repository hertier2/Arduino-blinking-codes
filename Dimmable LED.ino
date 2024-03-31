const int potPin=A0;
const int LED=11;
int readValue;
int writeValue;


void setup()
{
 pinMode(potPin,INPUT);
 pinMode(LED,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  readValue=analogRead(potPin);
  writeValue=readValue*(255.0/1023.0);
  
  analogWrite(LED,writeValue);
  
  Serial.print("you are writing a value of:");
  Serial.println(writeValue);
}