setup()
{
	Serial.println("Hello World");;
}

loop()
{
	// blink LED
	Digital.Write(1);
	Delay(100);
	DigitalWrite(0);
}
