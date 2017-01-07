int ledPin = 13;
int pirPin = 7;
int speakerPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);
  pinMode(speakerPin,OUTPUT);
}

void loop() {
  int pirVal = digitalRead(pirPin);
  if(pirVal == 1)
  {
    //Plays brief audible sound
    tone(speakerPin,262,2);
    //Strobes the LED
    for (int i=0; i<10; i++)
    {
      digitalWrite(ledPin,HIGH);
      digitalWrite(ledPin,LOW);
    } 
  }
}