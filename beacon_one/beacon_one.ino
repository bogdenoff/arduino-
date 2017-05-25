void setup()
{
  //enabling output mode for pin 13
  pinMode(13, OUTPUT);
}

void loop()
{
  //applying high signal to pin 13, which means 5 voltage. This will make the beacon glow
  digitalWrite (13, HIGH);

  //applying delay 100ms
  delay(100);

  //applying low signal to pin 13, which means 0 voltage. This will stop glowing of beacon
  digitalWrite (13, LOW);

  //applying delay 900ms
  delay(900);

  //after delay loop will start again
  //in total beacon will glow for 100ms+900ms=1s
}
