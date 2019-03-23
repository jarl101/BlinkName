

int led1 = D0; // Instead of writing D0 over and over again, we'll write led1

int interval = 400;


void setup() {

	pinMode(led1, OUTPUT);
	//pinMode(led2, OUTPUT);

}

//Dot interval 
void dot() {
    digitalWrite(led1, HIGH);
    delay(interval);
    digitalWrite(led1, LOW);
}

//Dash interval
void dash() {
    digitalWrite(led1, HIGH);
    delay(interval * 3);
    digitalWrite(led1, LOW);
}

//Interval between dots and dashes (1 Unit)
void dotInterval() {
   delay(interval); 
}

//Interval between letters (3 units)
void letterInterval() {
    delay(interval * 4);   
}

//Interva between words (7 units)
void wordInterval() {
    delay(interval * 7 -interval);
}

//Morse code A (.-)
void morseA() {
    dot();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code B (-...)
void morseB() {
    dash();
    dotInterval();
    dot();
    dotInterval();
    dot();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code C (-.-.)
void morseC() {
    dash();
    dotInterval();
    dot();
    dotInterval();
    dash();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code D (-..)
void morseD() {
    dash();
    dotInterval();
    dot();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code E (.)
void morseE() {
    dot();
    
    letterInterval();
}

//Morse code F (..-.)
void morseF() {
    dot();
    dotInterval();
    dot();
    dotInterval();
    dash();
    dotInterval();
    dot();
    
    letterInterval();
}

//More code G (--.)
void morseG() {
    dash();
    dotInterval();
    dash();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code H (....)
void morseH() {
    dot();
    dotInterval();
    dot();
    dotInterval();
    dot();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code I (..)
void morseI() {
    dot();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code J (.---)
void morseJ() {
    dot();
    dotInterval();
    dash();
    dotInterval();
    dash();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code K (-.-)
void morseK() {
    dash();
    dotInterval();
    dot();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morese code L (.-..)
void morseL() {
    dot();
    dotInterval();
    dash();
    dotInterval();
    dot();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code M (--)
void morseM() {
    dash();
    dotInterval();
    dash();
    
    letterInterval();
}

//Mourse code N (-.)
void morseN() {
    dash();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code O (---)
void morseO() {
    dash();
    dotInterval();
    dash();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code P (.--.)
void morseP() {
    dot();
    dotInterval();
    dash();
    dotInterval();
    dash();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code Q (--.-)
void morseQ() {
    dash();
    dotInterval();
    dash();
    dotInterval();
    dot();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code R (.-.)
void morseR() {
    dot();
    dotInterval();
    dash();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code S (...)
void morseS() {
    dot();
    dotInterval();
    dot();
    dotInterval();
    dot();
    
    letterInterval();
}

//Morse code T (-)
void morseT() {
    dash();
    
    letterInterval();
}

//Morse code U (..-)
void morseU() {
    dot();
    dotInterval();
    dot();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code V (...-)
void morseV() {
    dot();
    dotInterval();
    dot();
    dotInterval();
    dot();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code W (.--)
void morseW() {
    dot();
    dotInterval();
    dash();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code X (-..-)
void morseX() {
    dash();
    dotInterval();
    dot();
    dotInterval();
    dot();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code Y (-.--)
void morseY() {
    dash();
    dotInterval();
    dot();
    dotInterval();
    dash();
    dotInterval();
    dash();
    
    letterInterval();
}

//Morse code Z (--..)
void morseZ() {
    dash();
    dotInterval();
    dash();
    dotInterval();
    dot();
    dotInterval();
    dot();
    
    letterInterval();
}


// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
	
	//Spells out name in morse code via led (requires "wordInterval" between words)
	//name LIAM (.-..  ..  .-  --)
	morseL();
	morseI();
	morseA();
	morseM();
	
	wordInterval();
}
