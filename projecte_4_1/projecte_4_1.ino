int tempAiguas = 91;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAiguas > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
}

void loop()   // need this to be here even though its empty
{
}

