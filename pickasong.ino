void pickasong (int pick)
{
switch (pick)
{
case 1:
  tmrpcm.play("song1.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  break;
  
case 2:
  tmrpcm.play("song2.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  break;

case 3:
  tmrpcm.play("song3.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  break;

case 4:
  tmrpcm.play("song4.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  break;  
  
case 5:
  tmrpcm.play("song5.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  break;
  
  case 6:
  tmrpcm.play("song6.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  break;
  
  case 7:
  tmrpcm.play("song7.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  break;
  
  case 8:
  tmrpcm.play("song8.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  break;
  
}

}
