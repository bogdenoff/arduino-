//adding name for pin9 - LED
#define LED_PIN 9

void setup()
{
  //enabling output mode for pin 9
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  //appling PWM signal for changing voltage for 85 (1,66V)
  analogWrite(LED_PIN,85);
  //applying delay 250ms
  delay(250);
  //changing voltage for 170 (3,33V)
  analogWrite(LED_PIN,170);
  //applying delay 250ms
  delay(250);
  //changing voltage for 255 (5V)
  analogWrite(LED_PIN,255);
  //applying delay 250ms
  delay(250);
  
}
