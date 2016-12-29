int firstSong = 0;
int secondSong = 0;
 void playBlessings ()
{
  tmrpcm.play("maoztzur.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
 firstSong = random(0, 5);
 secondSong = random(0, 5);
 while (firstSong == secondSong) {
 secondSong = random(0, 5);
 }
  Serial.println(firstSong);
   Serial.println(secondSong);
   
   pickasong(firstSong);
   pickasong(secondSong);
}
