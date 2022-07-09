                                      /* 2-WAY TRAFFIC LIGHT CONTROLLER SYSTEM */
/* Required hardware components:
1. Arduino Uno-1
2. Breadboard-1
3. LED-2 green,2 yellow,2 red
4. Resistor(220 ohm)-6 */

int signal1[]={11,12,13}; // Red,Yellow,Green
int signal2[]={8,9,10};
/*****************************************************/
void setup() 
{
  int i=0;
  for(i=0;i<3;i++)
  {
    Serial.begin(9600);
    pinMode(signal1[i],OUTPUT);
    pinMode(signal2[i],OUTPUT);
  }
  for(i=0;i<3;i++)
  {
    digitalWrite(signal1[i],LOW);
    digitalWrite(signal2[i],LOW);
  }
}
/****************************************************/
void loop() 
{
  light_transform();
}
/****************************************************/
void light_transform()
{
  Serial.println("GREEN ON SIGNAL 1 AND RED ON SIGNAL 2");
  digitalWrite(signal1[2],HIGH);
  digitalWrite(signal2[0],HIGH);
  delay(3000);

  digitalWrite(signal1[0],LOW);
  digitalWrite(signal1[1],LOW);
  digitalWrite(signal2[1],LOW);
  digitalWrite(signal2[2],LOW);

  Serial.println("YELLOW ON SIGNAL 1 AND YELLOW ON SIGNAL 2");
  digitalWrite(signal1[2],LOW);
  digitalWrite(signal2[0],LOW);
  digitalWrite(signal1[1],HIGH);
  digitalWrite(signal2[1],HIGH);
  delay(1000);

  digitalWrite(signal1[1],LOW);
  digitalWrite(signal2[1],LOW);
  digitalWrite(signal1[0],LOW);
  digitalWrite(signal2[2],LOW);

  Serial.println("RED ON SIGNAL 1 AND GREEN ON SIGNAL 2");
  digitalWrite(signal1[0],HIGH);
  digitalWrite(signal2[2],HIGH);
  delay(3000);

  digitalWrite(signal1[0],LOW);
  digitalWrite(signal2[2],LOW);
  digitalWrite(signal1[1],LOW);
  digitalWrite(signal1[2],LOW);
  digitalWrite(signal2[0],LOW);
  digitalWrite(signal2[1],LOW);  
  
  Serial.println("YELLOW ON SIGNAL 1 AND YELLOW ON SIGNAL 2");
  digitalWrite(signal1[2],LOW);
  digitalWrite(signal2[0],LOW);
  digitalWrite(signal1[1],HIGH);
  digitalWrite(signal2[1],HIGH);
  delay(1000);

  digitalWrite(signal1[1],LOW);
  digitalWrite(signal2[1],LOW);
  digitalWrite(signal1[0],LOW);
  digitalWrite(signal2[2],LOW);
}
  
