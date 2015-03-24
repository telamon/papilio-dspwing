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
    unsigned long getSample18();
    //void writeLEDs(unsigned long value);
  private:
    int wishboneSlot;
};

#endif
