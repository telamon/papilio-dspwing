  #include <DSP_Wing.h>
  DSP_Wing dsp;
  void setup() {
    dsp.setup(6); // Initialize wing on wishbone slot 6
    Serial.begin(9600);

  }
  void loop(){
    
    // Wait for serial input.
    if(Serial.available()>0){
      // debug print.. 
      Serial.println("Attempting to enable effect");
      dsp.enableFX(FX_TREMOLO,true);
      Serial.println("tremolo enbled");
      
      unsigned char pw = Serial.read();
      Serial.print("Setting tremolo pulse-width to ");
      Serial.println(pw);
      Serial.print(pw*376,DEC);
      Serial.println("Hz");
    
      //dsp.setTremoloWidth(pw);
    }
    delay(500);
  }
