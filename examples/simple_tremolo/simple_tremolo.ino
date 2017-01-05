  #include <DSP_Wing.h>
  DSP_Wing dsp;
  void setup() {
    dsp.setup(6); // Initialize wing on wishbone slot 6
    Serial.begin(9600);

  }
  unsigned char pw;
  
  void serialExpriment(){
    
    // Wait for serial input.
    while(Serial.available() == 0);
    // Stream.parseInt() dosen't seem to work.
    pw = (Serial.read() -0x30)*25;
    
    Serial.print("Input: ");Serial.println(pw);
    if(pw != 0){  
      dsp.enableFX(FX_TREMOLO,true);    
      Serial.println("tremolo enabled");
      Serial.print("Setting tremolo pulse-width to ");
      Serial.println(pw);
      //Serial.print(pw*376,DEC);
      //Serial.println("Hz");
      dsp.setTremoloWidth(pw+25);
    }else{
      Serial.println("Disabling the effect");
      dsp.enableFX(FX_TREMOLO,false);    
    }
    delay(1000);
  }

  void loop(){
    
    Serial.println("Turning on");
    dsp.enableFX(FX_TREMOLO,true);
    dsp.setTremoloDepth(0xff);
    for(int i=0;i<9;i++){
      char w = (i*30)%0xff;
      Serial.print("Setwidth: ");Serial.println(w,DEC);
      dsp.setTremoloWidth(w);    

      delay(3000*i);
    }
    dsp.enableFX(FX_TREMOLO,false);
    Serial.println("Turning off");
    delay(2000);
  }
  
  
