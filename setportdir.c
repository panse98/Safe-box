#include"TIVAC.h"

typedef unsigned int uint32_t;
typedef enum{PORT_A,PORT_B,PORT_C,PORT_D,PORT_E,PORT_F} DIO_PORTS ;
typedef enum{output,input} direction;

#define SET_BIT(var,BIT)     var|=(1<<BIT)
#define CLR_BIT(var,BIT)     var&=~(1<<BIT)
#define Toggle_BIT(var,BIT)  var^=(1<<BIT)
#define Get_BIT(var,BIT)    (var>>BIT)&1
void SetPortDir (DIO_PORTS PortName, direction DIR){
	
	switch(PortName)
	{ 
		case PORT_A:
		{ switch(DIR)
			{case output:
			GPIO_PORTA_DIR_R=0xFF;
			case input:
			GPIO_PORTA_DIR_R=0x00;}
		}
		case PORT_B:
		{ switch(DIR)
			{case output:
			GPIO_PORTB_DIR_R=0xFF;
			case input:
			GPIO_PORTB_DIR_R=0x00;}
		}
		case PORT_C:
		{ switch(DIR)
			{case output:
			GPIO_PORTC_DIR_R=0xFF;
			case input:
			GPIO_PORTC_DIR_R=0x00;}
		}
		case PORT_D:
		{ switch(DIR)
			{case output:
			GPIO_PORTD_DIR_R=0xFF;
			case input:
			GPIO_PORTD_DIR_R=0x00;}
		}
		case PORT_E:
		{ switch(DIR)
			{case output:
			GPIO_PORTE_DIR_R=0x3F;
			case input:
			GPIO_PORTE_DIR_R=0x00;}
		case PORT_F:
		{switch(DIR)
			{case output:
			GPIO_PORTA_DIR_R=0x1F;
			case input:
			GPIO_PORTA_DIR_R=0x00;}
		}
	}

}
}