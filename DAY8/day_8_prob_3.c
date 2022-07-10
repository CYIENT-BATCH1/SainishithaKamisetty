3. Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.
II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3
 program:

#include<stdio.h>
int main()
   {
    int n1=0x1d;                   //0001 1110
    char n2=0xf3;                  //1111 0011
        n1|=((1<<3)|(1<<7));       //set the bits
         printf("%x\n",n1);       
    printf("%x %x %x",(n2>>2)&1,(n2>>1)&1,(n2>>0)&1);
       
   }
