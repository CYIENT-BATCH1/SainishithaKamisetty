3. Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, 
CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”
Program:
#include<stdio.h>
int main()
   {
    char a,n=0x1d;                           //0001 1100
    char n1=0x24;                            //0010 0101
    n=n>>2;
    if(n==0x07){
        n1&=~((1<<0)|(1<<1)|(1<<2)|(1<<3));   //set the bit
        printf("%x",n1);
    }
   }
