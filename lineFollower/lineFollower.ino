#define enA 10
#define in1 9
#define in2 8
#define in3 7
#define in4 6
#define enB5

#define R_S A0
#define L_S A1

void setup() {
  // put your setup code here, to run once:

  pinMode(R_S, INPUT);
  pinMode(L_S, INPUT);

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);

  analogWrite(enA, 150);
  analogWrite(enB, 150);
  dely(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

  if((digitalRead(R_S) == 0) && (digitalRead(L_S) == 0)) {
      forward();
    }

  if((digitalRead(R_S) == 1) && (digitalRead(L_S) == 0)) {
      turnRight();
    }

  if((digitalRead(R_S) == 0) && (digitalRead(L_S) == 1)) {
      turnLeft();
    }

  if((digitalRead(R_S) == 1) && (digitalRead(L_S) == 1)) {
      stop();
    }
}

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void turnRight() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void turnLeft() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
