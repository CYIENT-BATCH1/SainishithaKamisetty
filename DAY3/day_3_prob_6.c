6)Write program to accept hex value as i/p and right shift bit value also 
as i/p and print the value after doing the hex right shift
#include <stdio.h>

int main()
{
 int n=0xEF;
 int b=0xEF>>1;                    //right shift b with 1times               
 printf("%x",b);                   //print the b value
}
