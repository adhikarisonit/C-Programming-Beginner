#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a = 6.43823;
    int c = 24, d = 23444;
    char e[7] = "HELLO", f[10] = "EXECUTION" ;

    printf("The float upto 2 decimal places is %3.2f \n", a);
    printf("The float upto 2 decimal places is %#f \n", a); // Shows the maximum decimal places in a float
    printf("The integer left justified 4 places will be %-4d \n", c);
    printf("The integer right justified 6 places will be %+6d \n", d);
    printf("The String right justified 6 places will be %+1s \n", e); //Only one block
    printf("The string right justified 6 places will be %+15.8s \n", f); // First 8 characters and 15 blocks
    printf("Hex number is %#x", c);
    return 0;
}
