#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.filled_rectangle(0, 0, 150, 150, 0xFFFFFF);
    uLCD.textbackground_color(WHITE);

    uLCD.color(BLUE);
    uLCD.printf("107060015\n");

    uLCD.color(GREEN);
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);

    for (int i=30; i>=0; --i) {

        uLCD.locate(1,2);

        uLCD.printf("%2D",i);

        wait(1);

    }


    uLCD.background_color(0x999999);

}
