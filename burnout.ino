void burnout (int day)
{
digitalWrite(shamash, HIGH);
playBlessings(day);
delay (2000);
Translator(day);
delay(2000);
playBlessings ();
for (k=1; k<172800 ; k++){
skipDay = digitalRead(dayDown);
Serial.print(k);
Serial.print("  ");
Serial.println(skipDay);
if (k > 21600)
{
Translator(0);
}
if (skipDay < 0.2)
{
k = 172800;
Translator(0);
Serial.println("Skipped");
}
delay(500);
}
k=1;
}

