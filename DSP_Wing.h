/*

 Wishbone_Symbol_Example - Summarize your library here.

 Describe your library here.

 License: GNU General Public License V3

 (C) Copyright (Your Name Here)
 
 For more help on how to make an Arduino style library:
 http://arduino.cc/en/Hacking/LibraryTutorial

 */

#ifndef __DSP_Wing_H__
#define __DSP_Wing_H__

#include <inttypes.h> 
#include <zpuino-types.h>
#include <zpuino.h>
#include "Arduino.h"

class DSP_Wing
{
  public:
    DSP_Wing();
    void setup(unsigned int wishboneSlot);
    void setFXCTRL(unsigned char fx,unsigned char param, unsigned char value);
    void enableFX(unsigned char fx,boolean enabled);
    void setTremoloWidth(unsigned char pulseWidth);

  private:
    int wishboneSlot;
};

#define REG_FX_CTRL 0

// Effects definition
#define FX_TREMOLO 1

// Parameters definition
#define PARAM_ENABLED 0 // param enabled is 0 for all effects
#define PARAM_TREMOLO_WIDTH 1
#define PARAM_TREMOLO_DEPTH 2

#endif
