//Initialize Goal Number (Need) and Number Child Currently Has
long need, have;

const int SCK = 13; //16MHz Arduino

//Shift Register
const int SR_CLK = 7; //Latch (CLK)
const int SR_DATA = 8; 

//Define Push-Buttons
const int B1 = 2;
const int B2 = 3;
const int B3 = 4;
const int B4 = 5;
const int B5 = 6;
const int GO = 14;

void setup() {

  //Configure Push-Buttons
  pinMode(B1, INPUT_PULLUP);
  pinMode(B2, INPUT_PULLUP);
  pinMode(B3, INPUT_PULLUP);
  pinMode(B4, INPUT_PULLUP);
  pinMode(B5, INPUT_PULLUP);
  pinMode(GO, INPUT_PULLUP);


  //Configure Shift-Register(s)
  pinMode(SR_CLK, OUTPUT);
  pinMode(SR_DATA, OUTPUT);


  //For Random Number Generation...
  randomSeed(analogRead(0));                                                                                   
}

void loop() {
  //Wait for Go Button Press
    while (digitalRead(GO) == HIGH){};
    delay(200);

    //Randomly Generate Needed Total from 6-12 and Display
    int need = random(6,13);
    showNeed(need);

    //Initialize Sum and Display
    int have = 0;
    showHave(have);

    //Continuously Read Push-Buttons Until Goal Number Acquired
    while(have != need){
      int b1 = digitalRead(B1);
      int b2 = digitalRead(B2);
      int b3 = digitalRead(B3);
      int b4 = digitalRead(B4);
      int b5 = digitalRead(B5);
      //int go = digitalRead(GO);

      //Detect Button Pressed with Active Low
      if (b1 == LOW) { have += 1; delay(500); }
      if (b2 == LOW) { have += 2; delay(500); }
      if (b3 == LOW) { have += 3; delay(500); }
      if (b4 == LOW) { have += 4; delay(500); }
      if (b5 == LOW) { have += 5; delay(500); }
      //if (g0 == LOW) { }


      //Display LED
      

      //Display Hex


      //Correct Sum Case
      if (have == need){

      }


      //Incorrect Sum Case
      if(have > need){


      }

      //Pause Before Next Iteration
      delay(500);

    }





}
