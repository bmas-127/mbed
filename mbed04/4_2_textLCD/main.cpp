#include "mbed.h"

#include "TextLCD.h"


DigitalOut led(LED_RED);
TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{
      int x=30;
      lcd.printf("107060015\n");

      while(true)
      {
            led = !led;             // toggle led
            if(x < 0) x = 30;
            lcd.locate(5,1);
            lcd.printf("%d",x);    //conuter display
            wait(1);
            x--;
      }

}