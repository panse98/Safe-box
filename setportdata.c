#include"TIVAC.h"

typedef unsigned int uint32_t;
typedef enum{PORT_A,PORT_B,PORT_C,PORT_D,PORT_E,PORT_F} DIO_PORTS ;

void SetPortDir (DIO_PORTS PortName, uint32_t data)
{
	switch(PortName)
	{
		case PORT_A:
			GPIO_PORTA_DATA_R=data;
		case PORT_B:
			GPIO_PORTB_DATA_R=data;
		case PORT_C:
			GPIO_PORTC_DATA_R=data;
		case PORT_D:
			GPIO_PORTD_DATA_R=data;
		case PORT_E:
			GPIO_PORTE_DATA_R=data;
		case PORT_F:
			GPIO_PORTF_DATA_R=data;
	}
}