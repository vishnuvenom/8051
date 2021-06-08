#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	unsigned int i;
	while(1)
	{
		P0=0x80;
		for(i=0; i <8; i++) 
		{
			P0=P0<<1;
			delay(50000);
		}	
	}
}