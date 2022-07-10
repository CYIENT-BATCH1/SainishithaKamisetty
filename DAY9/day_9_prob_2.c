2 I). Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3
, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”
PROGRAM:
#include<stdio.h>
int main()
   {
    int n=0x1a; //0001 1010
    int n1=0x23; //0010 0011
    n=n>>2;
    if(n==0x06){                       //3,6,7 bits are set when there are equal to 0x06
        n1|=((1<<7)|(1<<6)|(1<<3));
        printf("%x",n1);
    }
   }
