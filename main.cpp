/*
This program uses printf to send Hello World to the Screen
The BAUD RATE of the MBED STUDIO SERIAL MONITOR should be 9600
By uncommenting out the printf's that contain escape sequences
you can see how the escape sequences work together.
*/


#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
   //printf("\e[1;1H");                   // put cursor on top left corner of screen
   //printf("\e[0m");                     // shut off all attributes
   //printf("\e[2J");                     // clear the screen of all attributes
   //printf("\e[1;32;46m");               // bold green letters on cyan backgroumd 
   //printf("\e[12;40H");
   printf("Hello World");               // print HELLO WORLD in bold green letters
                                        // on a cyan background at row 12, col 40
   fflush(stdout);                      // send contents of stdout to screen
   for(;;);                             // must stop program from going past last } 
}

