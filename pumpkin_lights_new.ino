int red = 0;
int green = 1;
int blue = 2;
int white = 3;
int rct = 1;
int flip = 1;

void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(white, OUTPUT);

digitalWrite(red, 1);
delay(1000);
digitalWrite(green, 1);
delay(1000);
digitalWrite(blue, 1);
delay(1000);
digitalWrite(white, 1);
delay(500);
digitalWrite(red, 0);
delay(500);
digitalWrite(green, 0);
delay(500);
digitalWrite(blue, 0);
delay(500);
digitalWrite(white, 0);
delay(2000);
}

void loop() {
  int cnt = 0;

  while(cnt < 3000, cnt++);
    {
      digitalWrite(red, rct);
    digitalWrite(green, 1);
    digitalWrite(blue, 1);
    delay(200);
    digitalWrite(green, 0);
    delay(100);
    digitalWrite(green, 1);
    delay(50);
    digitalWrite(blue, 0);
    delay(200);
    digitalWrite(white, 1);
    delay(50);
    digitalWrite(white, 0);
    delay(50);
    digitalWrite(white, 1);
    delay(50);
    digitalWrite(white, 0);
    digitalWrite(blue, 1);
    rct = rct - flip;
    flip = flip * -1;  
    }
}
