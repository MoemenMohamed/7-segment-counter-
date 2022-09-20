/*
 * seven_seg.h
 *
 * Created: 9/18/2022 12:42:06 AM
 *  Author: cs1
 */ 


#ifndef SEVEN_SEG_H_
#define SEVEN_SEG_H_
#include "../../MCAL/DIO/DIO.h"
struct SEVEN_SEGMENT

{	uint8_t Sevensegmentport;
	uint8_t num;
	uint8_t Sevensegmentpins[7];
};

#define clear_disp	'/'
void seven_segmentinit(struct SEVEN_SEGMENT *disp_1);

void seven_segmentwriteNum(struct SEVEN_SEGMENT *disp_1);




#endif /* SEVEN_SEG_H_ */