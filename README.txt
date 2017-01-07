This project utilized an HC-SR501 PIR sensor, an 8ohm/.1 watt speaker, an LED, several resistors, and a transistor to create
an alarm that sounds and blinks when motion is detected.

Parts:
  -HC-SR501
  -10K ohm resistor
  -30 ohm resistor
  -220 ohm resistor
  -NPN transistor
  -8 ohm/.1 watt speaker
  -LED
  -Arduino board
  
Pinouts:
  -Transistor base ---> D9 through 10k ohm resistor
  -Transistor emmitor ---> Ground
  -Transistor collector ---> Speaker
  -Speaker ---> 5V through 30 ohm resistor
  -PIR sensor ---> 5V, Gnd, D7
