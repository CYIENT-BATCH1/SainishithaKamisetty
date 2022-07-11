1. Write a program to convert a data stream from Little Endian to Big Endian (you can take any 8 bit value or use 0b110101110)?
  
  Program:

#include <stdio.h>
int main()
{
    int a=0x01001110;      //take the hexadecimal value.
 a=(a>>24)|((a&0xff)<<24))|(a>>8)&(0xff00)|((a&0xff00)<<8);
    printf("%x",a);

    return 0;
}
