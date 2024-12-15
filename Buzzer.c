#include <p18f4520.h>
#include <delays.h>


void main ()
{
int i = 700; 
ADCON1 = 0x0f;                                                  //declarations
TRISA = 0;
PORTAbits.RA4 = 0;

for (i = 700; i>0; i--)
{
PORTAbits.RA4 =~ PORTAbits.RA4;       // toggled wave
 Delay10TCYx(50);                                        // generate frequency
}
}