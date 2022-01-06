/*
This program is written for a relay that closes the relay on a high signal.  An alternate program may be made available in the future for systems using relays that close on a low signal.
*/
int Button1 = 2;  //Initializes the first button on digital pin 2
int Button2 = 3;  //Initializes the second button on digital pin 3
int Button3 = 4;  //Initializes the third button on digital pin 4
int Button4 = 5;  //Initializes the fourth button on digital pin 5
int Button5 = 6;  //Initializes the fifth button on digital pin 6
int PowerLED = 7;  //Initializes the green power LED on digital pin 7
int ShockLED = 8;  //Initializes the red shock LED on digital pin 8
int CorrectLED = 9;  //Initializes the blue correct LED on pin 9
int TinglerKit = 10;  //Initializes the tingler kit relay on pin 10
int Button1Status;  //Initializes the variable that stores the value of the first button
int Button2Status;  //Initializes the variable that stores the value of the second button
int Button3Status;  //Initializes the variable that stores the value of the third button
int Button4Status;  //Initializes the variable that stores the value of the fourth button
int Button5Status;  //Initializes the variable that stores the value of the fifth button
int RandomNumber;  //Initializes the random number variable for the random number generator

void setup() {
  // put your setup code here, to run once:
  pinMode(Button1, INPUT);  //Initializes the first button as an input
  pinMode(Button2, INPUT);  //Initializes the second button as an input
  pinMode(Button3, INPUT);  //Initializes the third button as an input
  pinMode(Button4, INPUT);  //Initializes the fourth button as an input
  pinMode(Button5, INPUT);  //Initializes the fifth button as an input
  pinMode(PowerLED, OUTPUT);  //Initializes the green power LED as an output
  pinMode(ShockLED, OUTPUT);  //Initializes the red shock LED as an output
  pinMode(CorrectLED, OUTPUT);  //Initializes the blue correct LED as an output
  pinMode(TinglerKit, OUTPUT);  //Initializes the tingler kit relay as an output
  digitalWrite(PowerLED, HIGH);  //Turn the green power LED on
}

void loop() {
  // put your main code here, to run repeatedly:
  RandomNumber = random(1,6);  //Generates a random number and stores it as a variable
  Button1Status = digitalRead(Button1);  //Reads the status of the first button
  Button2Status = digitalRead(Button2);  //Reads the status of the second button
  Button3Status = digitalRead(Button3);  //Reads the status of the third button
  Button4Status = digitalRead(Button4);  //Reads the status of the fourth button
  Button5Status = digitalRead(Button5);  //Reads the status of the fifth button
  if (Button1Status == 1) {  //If the first button is pressed
    if (RandomNumber == 1) {  //If the random number is a 1
      digitalWrite(CorrectLED, HIGH);  //Turns the blue correct LED on
      delay(1000);  //Waits 1 second
      digitalWrite(CorrectLED, LOW);  //Turns the blue correct LED off
      delay(1000);  //Waits 1 second
      digitalWrite(CorrectLED, HIGH);  //Turns the blue correct LED on
      delay(500);  //Waits 0.5 seconds
      digitalWrite(CorrectLED, LOW);  //Turns the blue correct LED off
      delay(500);  //Waits 0.5 seconds
      digitalWrite(CorrectLED, HIGH);  //Turns the blue correct LED on
      delay(500);  //Waits 0.5 seconds
      digitalWrite(CorrectLED, LOW);  //Turns the blue correct LED off
      delay(500);  //Waits 0.5 seconds
      digitalWrite(CorrectLED, HIGH);  //Turns the blue correct LED on
      delay(5500);  //Waits 5.5 seconds
      digitalWrite(CorrectLED, LOW);  //Turns the blue correct LED off
    }
    else {
      digitalWrite(ShockLED, HIGH);  //Turns the red shock LED on
      digitalWrite(TinglerKit, HIGH);  //Turns the tingler kit relay on
      delay(5000);  //Waits 5 seconds
      digitalWrite(ShockLED, LOW);  //Turns the red shock LED off
      digitalWrite(TinglerKit, LOW);  //Turns the tingler kit relay off
    }
  }
  else if (Button2Status == 1) {
    if (RandomNumber == 2) {
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
      digitalWrite(TinglerKit, HIGH);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, LOW);
    }
  }
  if (Button3Status == 1) {
    if (RandomNumber == 3) {
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
      digitalWrite(TinglerKit, HIGH);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, LOW);
    }
  }
  else if (Button4Status == 1) {
    if (RandomNumber == 4) {
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
      digitalWrite(TinglerKit, HIGH);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, LOW);
    }
  }
  else if (Button5Status == 1) {
    if (RandomNumber == 5) {
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
      digitalWrite(TinglerKit, HIGH);
      delay(5000);
      digitalWrite(ShockLED, LOW);
      digitalWrite(TinglerKit, LOW);
    }
  }
}
