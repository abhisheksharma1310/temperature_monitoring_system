/************************************Temperature Monitoring System**********************************************************/
int val;
int tempPin = A0;
int led = 2;
int fan = 3;
void setup()

  Serial.begin(9600);
  pinMode(led, INPUT);
}
void loop()
{
  val = analogRead(tempPin);
  float mv = ( val/1024.0)*5000;
  float cel = mv/10;
  float farh = (cel*9)/5 + 32;
  //temperature in degree celsius
  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(1000);
  //temperature in farenhite
  Serial.print("TEMPRATURE = ");
  Serial.print(farh);
  Serial.print("*F");
  Serial.println();
  //turn on Led
  if(cel>25){
    digitalWrite(led, HIGH);
    digitalWrite(fan, HIGH);
  }
  else{
    digitalWrite(led, LOW);
    digitalWrite(fan, LOW);
  }
}
