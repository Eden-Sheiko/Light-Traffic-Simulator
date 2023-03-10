/*
  Simulate Light Traffic:
  1. Red Color for 5 seconds.
  2. Yellow Color for 1 seconds.
  3. Green Color for 3 seconds.
  (then yellow, and back to red..)
*/

#define RED_TIME 5000
#define YELLOW_TIME 1000
#define GREEN_TIME 3000

void setup() {
  DDRB |= 0b00111000;
}

void loop() {
  PORTB |= 0b00001000;
  delay(RED_TIME);
  PORTB &= 0b11110111;
  PORTB |= 0b00010000;
  delay(YELLOW_TIME);
  PORTB &= 0b11101111;
  PORTB |= 0b00100000;
  delay(GREEN_TIME);
  PORTB &= 0b11011111;
  PORTB |= 0b00010000;
  delay(YELLOW_TIME);
  PORTB &= 0b11101111;
}
