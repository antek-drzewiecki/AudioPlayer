AudioPlayer::AudioPlayer(){
	return 0;

}

byte AudioPlayer::init(){
	pinMode(MP3_DREQ, INPUT);
	pinMode(MP3_XCS, OUTPUT);
	pinMode(MP3_XDCS, OUTPUT);
	pinMode(MP3_RESET, OUTPUT);

	//init vs
	digitalWrite(MP3_XCS, HIGH);
	digitalWrite(MP3_XDCS, HIGH);
	digitalWrite(MP3_RESET, LOW);

	return 0;
}