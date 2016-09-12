  #include <DSP_Wing.h>
  DSP_Wing dsp;
  void setup() {
    dsp.setup(6); // Initialize wing on wishbone slot 6
  }
  void loop(){
    delay(1000);
  }
