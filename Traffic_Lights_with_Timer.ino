// Traffic Lights with 7-Segment Timer
// Every 8 seconds, switch from Red Light to Green Light and vice-versa
// with 2 seconds delay in between for the Yellow Light
const int a=6; //a of 7-segment attach to digital pin 6
const int b=5; //b of 7-segment attach to digital pin 5
const int c=4; //c of 7-segment attach to digital pin 4
const int d=10; //d of 7-segment attach to digital pin 10
const int e=9; //e of 7-segment attach to digital pin 9
const int f=7; //f of 7-segment attach to digital pin 7
const int g=8; //g of 7-segment attach to digital pin 8

const int red=11; // Red LED attached to digital pin 11
const int yellow=12; // Yellow LED attached to digital pin 12
const int green=13; // Green LED attached to digital pin 13

void setup()
{
  // loop over thisPin from 4 to 13 and set them all to output
  for(int thisPin = 4; thisPin <= 13; thisPin++)
  {
    pinMode(thisPin,OUTPUT);
  }
}

void loop()
{
  // Initial State of LEDs
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  countdown_from_8();

  // Countdown 2 seconds and turn on Yellow LED
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  countdown_from_2();

  // Countdown 8 seconds and turn on Green LED
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  countdown_from_8();

  // Countdown 2 seconds and turn on Yellow LED
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  countdown_from_2();
}

void countdown_from_2()
{
  digital_2();// display 2 to the 7-segment
  delay(1000); //wait for a second
  digital_1();// display 1 to the 7-segment
  delay(1000); //wait for a second
  digital_0();// display 0 to the 7-segment
  delay(1000);//wait for a second
}

void countdown_from_8()
{
  digital_8();// display 8 to the 7-segment
  delay(1000);//wait for a second
  digital_7();// display 7 to the 7-segment
  delay(1000); //wait for a second
  digital_6();// display 6 to the 7-segment
  delay(1000); //wait for a second
  digital_5();// display 5 to the 7-segment
  delay(1000); //wait for a second
  digital_4();// display 4 to the 7-segment
  delay(1000); //wait for a second
  digital_3();// display 3 to the 7-segment
  delay(1000); //wait for a second
  digital_2();// display 2 to the 7-segment
  delay(1000); //wait for a second
  digital_1();// display 1 to the 7-segment
  delay(1000); //wait for a second
  digital_0();// display 0 to the 7-segment
  delay(1000);//wait for a second
}

void digital_0(void) // display 0 to the 7-segment
{
  for(int j = 4;j <= 10;j++)
  digitalWrite(j,HIGH);
  digitalWrite(g,LOW); // Turn off g of the 7-segment
}

void digital_1(void) // display 1 to the 7-segment
{
  for(int j = 4;j <= 10;j++)//turn off the others
  {
    digitalWrite(j,LOW);
  }
  digitalWrite(c,HIGH);//turn the c of the 7-segment on
  digitalWrite(b,HIGH);//turn the b of the 7-segment on
}

void digital_2(void) // display 2 to the 7-segment
{
  digitalWrite(b,HIGH);
  digitalWrite(a,HIGH);
  for(int j = 8;j <= 10;j++)
  digitalWrite(j,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(f,LOW);
}

void digital_3(void) // display 3 to the 7-segment
{
  unsigned char j;
  digitalWrite(g,HIGH);
  digitalWrite(d,HIGH);
  for(j=5;j<=7;j++)
  digitalWrite(j,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
}

void digital_4(void) // display 4 to the 7-segment
{
  digitalWrite(c,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
}

void digital_5(void) // display 5 to the 7-segment
{
  for(int j = 4;j <= 10;j++) {
    digitalWrite(j, HIGH);
  }
  digitalWrite(b,LOW);
  digitalWrite(e,LOW);
}

void digital_6(void) // display 6 to the 7-segment
{
  for(int j = 4;j <= 10;j++) {
    digitalWrite(j, HIGH);
  }
  digitalWrite(b,LOW);
}

void digital_7(void) // display 7 to the 7-segment
{
  for(int j = 4;j <= 10;j++) {
    digitalWrite(j, LOW);
  }
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(f,HIGH);
}

void digital_8(void) // display 8 to the 7-segment
{
  unsigned char j;
  for(j = 4;j <=10;j++)
  digitalWrite(j,HIGH);
}
