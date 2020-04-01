#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{

      uLCD.printf("________\n|        |\n||        \n|       |\n106061152"); //Default Green on black text

      wait(30);

}