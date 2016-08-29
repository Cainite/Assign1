#include "debounce.h"

volatile bit pb1Pressed = 0;
volatile bit pb2Pressed = 0;
volatile bit pb3Pressed = 0;
volatile bit pb5Pressed = 0;

volatile bit pb1Released = 0;
volatile bit pb2Released = 0;
volatile bit pb3Released = 0;
volatile bit pb5Released = 0;

volatile unsigned char pb1DebounceCount = 0;
volatile unsigned char pb2DebounceCount = 0;
volatile unsigned char pb3DebounceCount = 0;
volatile unsigned char pb5DebounceCount = 0;

void pressbutton1(void){
    if(PB1){
        pb1DebounceCount++;
            if(pb1DebounceCount > DEBOUNCE_REQ_COUNT && pb1Released){
                pb1Pressed = 1;
                pb1Released = 0; 
            } 
        } else {
            pb1DebounceCount = 0;
            pb1Released = 1;
    }          
}      
    
void pressbutton2(void){
    if(PB2){
        pb2DebounceCount++;
        if(pb2DebounceCount > DEBOUNCE_REQ_COUNT && pb2Released){
            pb2Pressed = 1;
            pb2Released = 0; 
        }
    } else {
        pb2DebounceCount = 0;
        pb2Released = 1;
    }               
}
    
void pressbutton3(void){
    if(PB3){
        pb3DebounceCount++;
        if(pb3DebounceCount > DEBOUNCE_REQ_COUNT && pb3Released){
            pb3Pressed = 1;
            pb3Released = 0; 
        }
    } else {
        pb3DebounceCount = 0;
        pb3Released = 1;          
    }    
}
   
void pressbutton5(void){
    if(PB5){
        pb5DebounceCount++;
        if(pb5DebounceCount > DEBOUNCE_REQ_COUNT && pb5Released){
            pb5Pressed = 1;
            pb5Released = 0; 
        }
    } else {
        pb5DebounceCount = 0;
        pb5Released = 1;          
    }    
}
    
