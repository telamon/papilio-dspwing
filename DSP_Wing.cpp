/*

 Wishbone_Symbol_Example - Summarize your library here.

 Describe your library here.

 License: GNU General Public License V3

 (C) Copyright (Your Name Here)
 
 For more help on how to make an Arduino style library:
 http://arduino.cc/en/Hacking/LibraryTutorial

 */

#include "Arduino.h"
#include "DSP_Wing.h"

DSP_Wing::DSP_Wing(){

}

void DSP_Wing::setup(unsigned int wishboneSlot){
	this->wishboneSlot = wishboneSlot;
}
/*
void DSP_WING::begin(int channel =0){
  
}
void DSP_WING::end(){
  
}*/
// T
// set amplification
// set mode 96Khz/32Khz

unsigned long DSP_Wing::getSample18(){
	return REGISTER(IO_SLOT(wishboneSlot),1);
}

//void Wishbone_Symbol_Example::writeLEDs(unsigned long value){
//	REGISTER(IO_SLOT(wishboneSlot),0) = value;
//}
