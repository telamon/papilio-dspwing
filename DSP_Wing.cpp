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
unsigned long DSP_Wing::getSample18(){
	return REGISTER(IO_SLOT(wishboneSlot),1);
}*/
void DSP_Wing::setFXCTRL(unsigned char fx,unsigned char param, unsigned char value){
  REGISTER(IO_SLOT(wishboneSlot),REG_FX_CTRL) = ((value & 0xff) << 9) | ( (param & 0xf) << 5 ) | ( (fx & 0xf) << 1) | 1;
  REGISTER(IO_SLOT(wishboneSlot),REG_FX_CTRL) = ((value & 0xff) << 9) | ( (param & 0xf) << 5 ) | ( (fx & 0xf) << 1) | 0;
}
void DSP_Wing::setTremoloWidth(unsigned char pulseWidth){
  this->setFXCTRL(FX_TREMOLO,PARAM_TREMOLO_WIDTH,pulseWidth);
}
void DSP_Wing::setTremoloDepth(unsigned char depth){
  this->setFXCTRL(FX_TREMOLO,PARAM_TREMOLO_DEPTH,depth);
}
void DSP_Wing::enableFX(unsigned char fx,boolean enabled){
  this->setFXCTRL(fx,PARAM_ENABLED,enabled?1:0);
}
//void Wishbone_Symbol_Example::writeLEDs(unsigned long value){
//	REGISTER(IO_SLOT(wishboneSlot),0) = value;
//}
