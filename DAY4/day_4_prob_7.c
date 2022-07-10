HOW TO CLEAR A BIT
#include <stdio.h>

int main()
{
    int a=0x25;                  //0010 0101
    int pos=2;
    a=a&~(1<<pos);               //1 left shift position times and do AND and compliement operation
    printf("%x",a);
}
