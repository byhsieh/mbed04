#include "mbed.h"

#include "TextLCD.h"


DigitalOut led(LED_RED);

TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{
      int x = 30;
      lcd.printf("ID_NUM:105070039\n");

      while(x >= 0)

      {
            led = !led;             // toggle led

            lcd.locate(7,1);

            lcd.printf("%2D",x);    //conuter display

            wait(1);

            --x;

      }

}