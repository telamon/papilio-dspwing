DSPWing
========

Opensourcing this long ongoing project of mine cause it's kinda cool.
The idea is separated into 2 parts, the hardware components and the software(ish)

  Overall project state:
  clean audio playback without glitches. no effects existing yet.


# Hardware

The circuit is quite simple, includes an `LM386` amplifier that optionally can be bypassed using a push-button, and an `MCP3208` 12bit 8channel ADC that is capable of highfrequency sampling (96k audio).

![Wing schematic](https://raw.githubusercontent.com/telamon/papilio-dspwing/master/papilio-dsp-wing-v1.2_schem.png)

There's a fritzing file included in this project, but don't try and order it as is
as the PCB design is not complete nor tested.
( I never left the breadboard phase )

I suspect that this schematic could be improved with a couple of pulldown resistors on both IC's input pins, sometimes i hear some wierd cap-noise.

# Software

It's an Papilio DesignLab library.

Usage & Installation:

* Download DesignLab (1.0.7+)
* clone this repository into your `Sketchbook/libraries` folder
* [Include the dspwing module](https://github.com/telamon/papilio-dspwing/raw/master/papilio_schematic-minimum_dspwing_setup.pdf) in your papilio/zpuino circuit using DesignLab/Xilinx ISE
* Generate a bit file and load it to your papilio. 
* Develop some effects in VHDL


Example sketch:


    #include <DSP_Wing.h>

    void setup() {
      dsp.setup(6); // Initialize wing on wishbone slot 6
    }
    void loop(){
      sleep(1000);
    }
