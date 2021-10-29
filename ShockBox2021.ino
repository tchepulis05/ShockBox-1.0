int Button1 = 2;
int Button2 = 3;
int Button3 = 4;
int Button4 = 5;
int Button5 = 6;
int PowerLED = 7;
int ShockLED = 8;
int CorrectLED = 9;
int TinglerKit = 10;
int Button1Status;
int Button2Status;
int Button3Status;
int Button4Status;
int Button5Status;
int RandomNumber;

void setup() {
  // put your setup code here, to run once:
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);
  pinMode(Button4, INPUT);
  pinMode(Button5, INPUT);
  pinMode(PowerLED, OUTPUT);
  pinMode(ShockLED, OUTPUT);
  pinMode(CorrectLED, OUTPUT);
  pinMode(TinglerKit, OUTPUT);
  digitalWrite(PowerLED, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  RandomNumber = random(1,6);
  Button1Status = digitalRead(Button1);
  Button2Status = digitalRead(Button2);
  Button3Status = digitalRead(Button3);
  Button4Status = digitalRead(Button4);
  Button5Status = digitalRead(Button5);
  if (Button1Status == 1) {
    if (RandomNumber == 1) {
      digitalWrite(CorrectLED, HIGH);
      digitalWrite(CorrectLED, HIGH);
      delay(1000);
      digitalWrite(CorrectLED, LOW);
      delay(1000);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(5000);
      digitalWrite(CorrectLED, LOW);
    }
    else {
      digitalWrite(ShockLED, HIGH);
      digitalWrite(TinglerKit, LOW);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, HIGH);
    }
  }
  else if (Button2Status == 1) {
    if (RandomNumber == 2) {
      digitalWrite(CorrectLED, HIGH);
      digitalWrite(CorrectLED, HIGH);
      delay(1000);
      digitalWrite(CorrectLED, LOW);
      delay(1000);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(5000);
      digitalWrite(CorrectLED, LOW);
    }
    else {
      digitalWrite(ShockLED, HIGH);
      digitalWrite(TinglerKit, LOW);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, HIGH);
    }
  }
  if (Button3Status == 1) {
    if (RandomNumber == 3) {
      digitalWrite(CorrectLED, HIGH);
      digitalWrite(CorrectLED, HIGH);
      delay(1000);
      digitalWrite(CorrectLED, LOW);
      delay(1000);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(5000);
      digitalWrite(CorrectLED, LOW);
    }
    else {
      digitalWrite(ShockLED, HIGH);
      digitalWrite(TinglerKit, LOW);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, HIGH);
    }
  }
  else if (Button4Status == 1) {
    if (RandomNumber == 4) {
      digitalWrite(CorrectLED, HIGH);
      digitalWrite(CorrectLED, HIGH);
      delay(1000);
      digitalWrite(CorrectLED, LOW);
      delay(1000);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(5000);
      digitalWrite(CorrectLED, LOW);
    }
    else {
      digitalWrite(ShockLED, HIGH);
      digitalWrite(TinglerKit, LOW);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, HIGH);
    }
  }
  else if (Button5Status == 1) {
    if (RandomNumber == 5) {
      digitalWrite(CorrectLED, HIGH);
      digitalWrite(CorrectLED, HIGH);
      delay(1000);
      digitalWrite(CorrectLED, LOW);
      delay(1000);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, LOW);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(500);
      digitalWrite(CorrectLED, HIGH);
      delay(5000);
      digitalWrite(CorrectLED, LOW);
    }
    else {
      digitalWrite(ShockLED, HIGH);
      digitalWrite(TinglerKit, LOW);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, HIGH);
    }
  }
}
