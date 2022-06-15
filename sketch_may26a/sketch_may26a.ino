int leda= 2;
int ledb= 3;
int ledc= 4;
int ledd= 5;
int lede= 6;
int ledf= 7;
int ledg= 8;
int buzz= 11;

float a= 0.212;
float b= 0.24694;
float c= 0.26163;
float d= 0.29366;
float e= 0.32963;
float f= 0.34923;
float g= 0.392;

void setup() {
  pinMode(leda,OUTPUT);
  pinMode(ledb,OUTPUT);
  pinMode(ledc,OUTPUT);
  pinMode(ledd,OUTPUT);
  pinMode(lede,OUTPUT);
  pinMode(ledf,OUTPUT);
  pinMode(ledg,OUTPUT);
  pinMode(buzz,OUTPUT);
}

void loop() {
  tone(a,100);
  digitalWrite(leda, HIGH);
  delay(100);
  digitalWrite(leda, LOW);

  tone(b,100);
  digitalWrite(ledb, HIGH);
  delay(100);
  digitalWrite(ledb,LOW);

  tone(c,100);
  digitalWrite(ledc, HIGH);
  delay(100);
  digitalWrite(ledc,LOW);

  tone(d,100);
  digitalWrite(ledd, HIGH);
  noTone(0);
  digitalWrite(ledd,LOW);

  tone(b,100);
  digitalWrite(ledb, HIGH);
  noTone(0);
  digitalWrite(ledb,LOW);

  tone(c,100);
  digitalWrite(ledc, HIGH);
  delay(100);
  digitalWrite(ledc,LOW);
  
}
