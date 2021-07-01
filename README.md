# Temperature_monitoring_system
**It detects temperature, and if the temperature value is greater than the specified value, then it will turn on Fan and Led.** 

**Arduino Code**

<pre>
<code>
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
</code>
</pre>

**Schematic**

<img src = "https://github.com/abhisheksharma1310/temperature_monitoring_system/blob/main/temperature%20monitoring%20system_bb.png">
