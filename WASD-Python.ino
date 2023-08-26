/*
  Serial Call and Response in ASCII
  Language: Wiring/Arduino

  This program sends an ASCII A (byte of value 65) on startup and repeats that
  until it gets some data in. Then it waits for a byte in the serial port, and
  sends three ASCII-encoded, comma-separated sensor values, truncated by a
  linefeed and carriage return, whenever it gets a byte in.

  The circuit:
  - potentiometers attached to analog inputs 0 and 1
  - pushbutton attached to digital I/O 2

  created 26 Sep 2005
  by Tom Igoe
  modified 24 Apr 2012
  by Tom Igoe and Scott Fitzgerald
  Thanks to Greg Shakar and Scott Fitzgerald for the improvements

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/SerialCallResponseASCII
*/

void setup() {
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(9600);
  Serial.print("Iniciando");
  delay(2000);

}

void loop() {
  Serial.println("A");
  delay(200);
  Serial.println("W");
  delay(200);
  Serial.println("S");
  delay(200);
  Serial.println("D");
  delay(2000);
}
