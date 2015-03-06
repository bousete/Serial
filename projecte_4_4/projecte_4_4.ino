float KgCO2m2 = 3.3;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (  KgCO2m2 < 3.2)
  {
    Serial.print("Qualificacio energetica: A");
  }
  else if(  KgCO2m2 < 6.5)
  {
    Serial.print("Qualifiacio energetica: B");
  }
  else if(  KgCO2m2 < 11.1)
  {
    Serial.print("Qualifiacio energetica: C");
  }
  else if(  KgCO2m2 < 17.7)
  {
    Serial.print ("Qualificacio energetica: D");
  }
  else if( KgCO2m2 < 38.2)
  {
    Serial.print ("Qualificacio energetica: E");
  }
  else if(  KgCO2m2 < 43.2)
  {
    Serial.print ("Qualificacio energetica: F");
  }
  else
  {
    Serial.print ("Qualificacio energetica: G");
  }
}

void loop()   //We need this to be here even though its empty
{
}
