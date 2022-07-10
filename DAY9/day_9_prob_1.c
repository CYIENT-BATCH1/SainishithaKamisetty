1 . Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.
II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
PROGRAM:
#include<stdio.h>
int main()
   {
    int n1=0x1c;    //0001 1100
    int n2=0x55;    //0101 0101
        n1&=~((1<<3)|(1<<4)|(1<<6)); //1        //clear the 1,4,6 bits
         printf("%x\n",n1);
    printf("%x %x %x",(n2>>7)&1,(n2>>1)&1,(n2>>0)&1);   //2
       
   }
