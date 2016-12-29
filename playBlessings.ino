void playBlessings (int day)
{
  tmrpcm.play("fbless.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  delay(2000);
  tmrpcm.play("sbless.wav");
  while (tmrpcm.isPlaying()) {
    delay(250);
  }
  if (day == 1) {
    delay(2000);
    tmrpcm.play("tbless.wav");
    while (tmrpcm.isPlaying()) {
      delay(250);
    }
  }

}
