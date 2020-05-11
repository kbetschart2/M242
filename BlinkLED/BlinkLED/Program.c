#include <avr\io.h>
#include <Atmega328P.h>
#define F_CPU 16000000
#include <avrlib.h>
#include <util\delay.h>

#include <inttypes.h>

int main(void)
{
	Usart_Init(250000);

	//Set Pin 5 as output
	SetRegister(PortB.DDR, (PIN5, DdrOutput));

	while (True)
	{
		//TODO LED ON


		//TODO LED OFF
	}

	return 0;
}