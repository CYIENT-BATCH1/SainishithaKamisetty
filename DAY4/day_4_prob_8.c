HOW TO COMPLIMENT A BIT 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=0x24;                //0010 0100
    int pos=4;
    a=a^(1<<pos);              //1 left shift position times and do XOR operation
    printf("%x",a);
}
