setup()
{
	Serial.println("Hello World");;
}

loop()
{
	// blink LED
	Digital.Write(pin2, 1);
	Delay(100);
	DigitalWrite(pin2, 0);
}
