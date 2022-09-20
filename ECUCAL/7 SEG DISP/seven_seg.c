/*
 * seven_seg.c
 *
 * Created: 9/18/2022 12:40:54 AM
 *  Author: cs1
 */ 
#include "seven_seg.h"


void seven_segmentinit(struct SEVEN_SEGMENT *disp_1)
{
	DIO_init((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],Output);
	DIO_init((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],Output);
	DIO_init((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],Output);
	DIO_init((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[3],Output);
	DIO_init((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[4],Output);
	DIO_init((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[5],Output);
	DIO_init((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],Output);
}

void seven_segmentwriteNum(struct SEVEN_SEGMENT *disp_1)
{
	switch((*disp_1).num)
	{	
		case clear_disp:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],Low);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],Low);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],Low);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[3],Low);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[4],Low);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[5],Low);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],Low);
		break;
		
		case 0:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[3],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[4],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[5],High);
		break;
		
		case 1:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		break;
		
		case 2:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[3],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[4],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],High);
		break;
		
		case 3:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[3],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],High);
		break;
		
		case 4:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[5],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],High);
		break;
		
		case 5:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[3],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[5],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],High);
		break;
		
		case 6:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[3],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[4],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[5],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],High);
		break;
		
		case 7:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		break;
		
		case 8:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[3],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[4],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[5],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],High);
		break;
		
		case 9:
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[0],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[1],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[2],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[5],High);
		DIO_write((*disp_1).Sevensegmentport,(*disp_1).Sevensegmentpins[6],High);
		break;
	}
}