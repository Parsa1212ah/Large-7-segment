#include <mega8.h>
#include <delay.h>

unsigned char seg[12]={0xc0,0xf9,0xA4,0xB0,0x99,0x92,0x82,0xf8,0x80 ,0x90,0xff},i;

void main(void)
{
 DDRC=0xFF;
 DDRB=0xFF; 
 while (1)
 {
  PORTC.2=1;
  PORTC.1=0;
  PORTC.0=0;
  for(i=0;i<10;i++)
  {
   PORTB=~seg[i];
   delay_ms(500);
  }
  PORTC.2=0;
  PORTC.1=1;
  PORTC.0=0;
  for(i=0;i<10;i++)
  {
   PORTB=~seg[i];
   delay_ms(500);
  }
  PORTC.2=0;
  PORTC.1=0;
  PORTC.0=1;
  for(i=0;i<10;i++)
  {
   PORTB=~seg[i];
   delay_ms(500);
  }
 }
}
