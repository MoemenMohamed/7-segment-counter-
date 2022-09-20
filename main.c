/*
 * Proj_A0.c
 *
 * Created: 9/16/2022 11:59:43 PM
 * Author : cs1
 */ 

#include "registers.h"
#include "MCAL/Timer1/Timer1.h"
#include "ECUCAL/Seven_seg_disp/seven_seg.h"


int main(void)
{	struct SEVEN_SEGMENT disp_1={.Sevensegmentpins={0,1,2,3,4,5,6}};
	disp_1.Sevensegmentport = port_C;
	
	seven_segmentinit(&disp_1);
    /* Replace with your application code */
	DDRA |= 0X01;
	DDRC |= 0xFF;
    while (1) 
    {
		//PORTA ^= 0X01;
		//delay_seconds(1);
		int i;
		
		for(i=0;i<10;i++)
		{	
			disp_1.num= i;
			seven_segmentwriteNum(&disp_1);
			delay_seconds(1);
			disp_1.num= clear_disp;
			seven_segmentwriteNum(&disp_1);
		}


    }
}

