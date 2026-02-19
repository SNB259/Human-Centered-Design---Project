void display_led(int data_pin, int clock_pin, int have, int need){


  //Load Shift Register 3
  byte chip3_output = chip3_map[have];
  shiftOut(data_pin, clock_pin, MSBFIRST, chip3_output);

  //Load Shift Register 2
  byte chip2_output = chip2_map[have][need];
  shiftOut(data_pin, clock_pin, MSBFIRST, chip2_output);
  
  
  //Load Shift Register 1
  if(need == 6){
    shiftOut(data_pin, clock_pin, MSBFIRST, B00111111);
  }
  else if(need == 7){
    shiftOut(data_pin, clock_pin, MSBFIRST, B01111111);
  }
  else if(need>=8){
    shiftOut(data_pin, clock_pin, MSBFIRST, B11111111);
  }
}