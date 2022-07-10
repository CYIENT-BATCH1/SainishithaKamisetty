6)HOW TO SET A BIT
#include <stdio.h>

int main()
{
    int a=0x12;                          //0001 0010 
    int pos=2;
    a=a|(1<<pos);                       //Right shift the 1 bit position times and do OR operation
    printf("%x",a);
}
