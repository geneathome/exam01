#include "mbed.h"


PwmOut PWM1(D6);

AnalogIn Ain(A0);

int main(){

  
while(1){

    PWM1.period(0.5);
    
    for(int i=0;i<9;i++) {
      PWM1=PWM1+0.1;
      wait(0.1);
      }
      for(int i=0;i<9;i++) {
      PWM1=PWM1-0.1;
      wait(0.1);
      }

    


  }

}