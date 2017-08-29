#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS 1000

int main (void)
{
 /* mettre le pin 5 du PORTB en output*/
 DDRB |= _BV(DDB5);
 
 while(1) {
  /* mettre le pin 5 en high pour allumer la led */
  PORTB |= _BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);
 
  /* mettre le pin 5 en low pour éteindre la led */
  PORTB &= ~_BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);
 }
}
