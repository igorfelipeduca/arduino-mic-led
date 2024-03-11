const int LED = 7;
const int MIC = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(MIC, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int micRead = analogRead(MIC);

  Serial.print("Volume: ")
  Serial.print(micRead)
  Serial.println(" ")

  if(micRead >= 800) {
    digitalWrite(LED, HIGH);
  }

  digitalWrite(LED, LOW);
}
