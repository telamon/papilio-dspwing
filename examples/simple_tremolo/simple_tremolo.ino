  #include <DSP_Wing.h>
  DSP_Wing dsp;
  void setup() {
    dsp.setup(6); // Initialize wing on wishbone slot 6
    Serial.begin(9600);

  }
  void loop(){
    // Wait for serial input.

    if(Serial.available()>0){
      unsigned char pw = Serial.read();
      Serial.print("Setting tremolo pulse-width to ");
      Serial.println(pw);
      Serial.print(pw*376,DEC);
      Serial.println("Hz");
      dsp.enableFX(FX_TREMOLO,true);
      //dsp.setTremoloWidth(pw);
    }
    delay(500);
  }
