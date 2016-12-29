#include <TMRpcm.h>  
#include <SD.h>
#include <SPI.h>

TMRpcm tmrpcm;
long k = 0;
int skipDay = 0;

int shamash = 2;
int candle1 = A0;
int candle2 = A1;
int candle3 = A2;
int candle4 = A3;
int candle5 = A4;
int candle6 = A5;
int candle7 = 8;
int candle8 = 3;

int dayUp = 5;
int dayDown = 6;

int day = 1;
int tempRead = 1;

void setup()
{

  Serial.begin(9600);
   
  tmrpcm.speakerPin = 9; //Set speaker output pin to 9 
  pinMode(9, INPUT);
   
   if (!SD.begin(10)) {
    Serial.println("SD card initialization failed!");
    return;
  }
   
pinMode(candle1, OUTPUT);
pinMode(candle2, OUTPUT);
pinMode(candle3, OUTPUT);
pinMode(candle4, OUTPUT);
pinMode(candle5, OUTPUT);
pinMode(candle6, OUTPUT);
pinMode(candle7, OUTPUT);
pinMode(candle8, OUTPUT);
pinMode(shamash, OUTPUT);
pinMode(dayUp, INPUT);
pinMode(dayDown, INPUT);

digitalWrite(candle1, LOW);
digitalWrite(candle2, LOW);
digitalWrite(candle3, LOW);
digitalWrite(candle4, LOW);
digitalWrite(candle5, LOW);
digitalWrite(candle6, LOW);
digitalWrite(candle7, LOW);
digitalWrite(candle8, LOW);
digitalWrite(shamash, LOW);
digitalWrite(dayUp, LOW);
digitalWrite(dayDown, LOW);
Serial.println('setup done');
}


void loop()
{
      while (day < 9) 
{
                burnout(day);
                day = day +1;
}
}
