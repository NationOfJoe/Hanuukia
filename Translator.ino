void Translator (int day)
{
switch (day)
{
case 0:
        digitalWrite(shamash, LOW);
        digitalWrite(candle1, LOW);
        digitalWrite(candle2, LOW);
        digitalWrite(candle3, LOW);
        digitalWrite(candle4, LOW);
        digitalWrite(candle5, LOW);
        digitalWrite(candle6, LOW);
        digitalWrite(candle7, LOW);
        digitalWrite(candle8, LOW);
        break;
        
 case 1:
        digitalWrite(shamash, HIGH);
        digitalWrite(candle1, HIGH);
        digitalWrite(candle2, LOW);
        digitalWrite(candle3, LOW);
        digitalWrite(candle4, LOW);
        digitalWrite(candle5, LOW);
        digitalWrite(candle6, LOW);
        digitalWrite(candle7, LOW);
        digitalWrite(candle8, LOW);
        break;
        
 case 2:
        digitalWrite(shamash, HIGH);
        digitalWrite(candle1, HIGH);
        delay(2000);
        digitalWrite(candle2, HIGH);
        digitalWrite(candle3, LOW);
        digitalWrite(candle4, LOW);
        digitalWrite(candle5, LOW);
        digitalWrite(candle6, LOW);
        digitalWrite(candle7, LOW);
        digitalWrite(candle8, LOW);
        break;
 
 case 3:
        digitalWrite(shamash, HIGH);
        digitalWrite(candle1, HIGH);
        delay(2000);
        digitalWrite(candle2, HIGH);
        delay(2000);
        digitalWrite(candle3, HIGH);
        digitalWrite(candle4, LOW);
        digitalWrite(candle5, LOW);
        digitalWrite(candle6, LOW);
        digitalWrite(candle7, LOW);
        digitalWrite(candle8, LOW);

        break;
       
  case 4:
        digitalWrite(shamash, HIGH);
        digitalWrite(candle1, HIGH);
        delay(2000);
        digitalWrite(candle2, HIGH);
        delay(2000);
        digitalWrite(candle3, HIGH);
        delay(2000);
        digitalWrite(candle4, HIGH);
        digitalWrite(candle5, LOW);
        digitalWrite(candle6, LOW);
        digitalWrite(candle7, LOW);
        digitalWrite(candle8, LOW);
        break;
        
  case 5:
        digitalWrite(shamash, HIGH);
        digitalWrite(candle1, HIGH);
        delay(2000);
        digitalWrite(candle2, HIGH);
        delay(2000);
        digitalWrite(candle3, HIGH);
        delay(2000);
        digitalWrite(candle4, HIGH);
        delay(2000);
        digitalWrite(candle5, HIGH);
        digitalWrite(candle6, LOW);
        digitalWrite(candle7, LOW);
        digitalWrite(candle8, LOW);
        break;
        
   case 6:
        digitalWrite(shamash, HIGH);
        digitalWrite(candle1, HIGH);
        delay(2000);
        digitalWrite(candle2, HIGH);
        delay(2000);
        digitalWrite(candle3, HIGH);
        delay(2000);
        digitalWrite(candle4, HIGH);
        delay(2000);
        digitalWrite(candle5, HIGH);
        delay(2000);
        digitalWrite(candle6, HIGH);
        digitalWrite(candle7, LOW);
        digitalWrite(candle8, LOW);
        break;
        
    case 7:
        digitalWrite(shamash, HIGH);
        digitalWrite(candle1, HIGH);
        delay(2000);
        digitalWrite(candle2, HIGH);
        delay(2000);
        digitalWrite(candle3, HIGH);
        delay(2000);
        digitalWrite(candle4, HIGH);
        delay(2000);
        digitalWrite(candle5, HIGH);
        delay(2000);
        digitalWrite(candle6, HIGH);
        delay(2000);
        digitalWrite(candle7, HIGH);
        digitalWrite(candle8, LOW);
        break;
        
     case 8:
        digitalWrite(shamash, HIGH);
        digitalWrite(candle1, HIGH);
        delay(2000);
        digitalWrite(candle2, HIGH);
        delay(2000);
        digitalWrite(candle3, HIGH);
        delay(2000);
        digitalWrite(candle4, HIGH);
        delay(2000);
        digitalWrite(candle5, HIGH);
        delay(2000);
        digitalWrite(candle6, HIGH);
        delay(2000);
        digitalWrite(candle7, HIGH);
        delay(2000);
        digitalWrite(candle8, HIGH);
        break;
}


}
