#include "mbed.h"

DigitalIn bttn(PC_13);

int counter = 0;


void press(){
     counter++;
    printf("pressed\n");

}

int main()
{

    for (int i=0; i<10; i++)
    press();


  {  printf("  %d\n times", counter );
  }
    return 0;

}