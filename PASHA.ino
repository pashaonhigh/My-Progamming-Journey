//PASHA
//XII TAV 2

const int merahLed = 19;
const int kuningLed = 18;
const int hijauLed = 5;
const int buzz = 17;

void setup() {
  // put your setup code here, to run once:
  pinMode(merahLed, OUTPUT);
  pinMode(kuningLed, OUTPUT);
  pinMode(hijauLed, OUTPUT);
  pinMode(buzz, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(merahLed, HIGH);
  digitalWrite(kuningLed, LOW);
  digitalWrite(hijauLed, LOW);
  delay(5000);
  digitalWrite (buzz, HIGH);
  delay(2000);
  digitalWrite (buzz, LOW);


  digitalWrite(merahLed, LOW);
  digitalWrite(kuningLed, HIGH);
  digitalWrite(hijauLed, LOW);
  delay(2000);
  digitalWrite (buzz, HIGH);
  delay(2000);
digitalWrite (buzz, LOW);

  digitalWrite(merahLed, LOW);
  digitalWrite(kuningLed, LOW);
  digitalWrite(hijauLed, HIGH);
  delay(5000);
digitalWrite (buzz, HIGH);
  delay(6000);
  digitalWrite (buzz, LOW);
}
