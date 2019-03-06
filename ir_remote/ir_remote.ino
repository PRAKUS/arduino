/* Example program for from IRLib – an Arduino library for infrared encoding and decoding
 * Version 1.3   January 2014
 * Copyright 2014 by Chris Young http://cyborg5.com
 * "IRservo" Control a servo using an IR remote
 */
#include <IRLib.h>
 
/* Note: Servo library uses TIMER1. The default timer for IRLib on Arduino Uno
 * is TIMER2 so there is no conflict. However a default timer on Arduino Leonardo
 * is TIMER1 so you will have to modify the timer used to use TIMER3 or TIMER4
 * as specified in IRLibTimer.h. Also you will need to modify the input being used.
 */
// You will have to set these values depending on the protocol
// and remote codes that you are using. These are from my Sony DVD/VCR
#define MY_PROTOCOL NEC
#define LED_ON    0xF7C03F //Move several clockwise
#define LED_OFF   0xF740BF //Move servo counterclockwise


IRrecv My_Receiver(9);//Receive on pin 11
IRdecode My_Decoder; 
//Servo My_Servo;  // create servo object to control a servo 
//int pos;         // variable to store the servo position 
//int Speed;       // Number of degrees to move each time a left/right button is pressed
 
void setup() 
{ 
  My_Receiver.No_Output();//Turn off any unused IR LED output circuit
  pinMode(13,OUTPUT); // attaches the servo on pin 9 to the servo object 
  My_Receiver.enableIRIn(); // Start the receiver
} 
 
void loop() 
{ 
    if (My_Receiver.GetResults(&My_Decoder)) {
       My_Decoder.decode();
       if(My_Decoder.decode_type==MY_PROTOCOL) {
          switch(My_Decoder.value) {
            case LED_ON:
            digitalWrite(13,HIGH); break;
            case LED_OFF:
            digitalWrite(13,LOW); break; 
            
          }
        //My_Servo.write(pos); // tell servo to go to position in variable 'pos' 
       }
     My_Receiver.resume();
    }
}

