int Doifix (int day)
  {
    tempRead = digitalRead(dayDown);
    if (dayDown  < 0.2 )
    {
    day = day -1;
    tone(9,500,500);
    }
    
    if (dayUp  < 0.2 )
    {
    day = day + 1;
    tone(9,500,500);
    }
    
return day;
  }
