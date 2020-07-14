String inputs;
#define relay1 9
#define relay2 8
#define relay3 7
#define relay4 6
void setup()
{
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
}
void loop()
{
  while(Serial.available())
  {
    delay(10);
    char c = Serial.read();
    if (c == '#')
    {
      break;
    }
    inputs += c;
  }
  if (inputs.length()>0)
  {
    Serial.println(inputs);
    if(inputs == "A")
    {
      digitalWrite(relay1, LOW);
    }
    else if(inputs == "a")
    {
      digitalWrite(relay1, HIGH);
    }
    else if(inputs == "B")
    {
      digitalWrite(relay2, LOW);
    }
    else if(inputs == "b")
    {
      digitalWrite(relay2, HIGH);
    }
    else if(inputs == "C")
    {
      digitalWrite(relay3, LOW);
    }
    else if(inputs == "c")
    {
      digitalWrite(relay3, HIGH);
    }
    else if(inputs == "D")
    {
      digitalWrite(relay4, LOW);
    }
    else if(inputs=="d")
    {
      digitalWrite(relay4, HIGH);
    }
    inputs="a";
  }
}
