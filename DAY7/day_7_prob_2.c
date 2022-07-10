2 Write a code to swap even bits with odd bits in unsigned long variable(uint64).
Program:

#include <stdio.h>
int main() {
    int a;
   unsigned long int b = 0xaaaaaaaa,c=0x55555555;
    a = (b>>1)|(c<<1);     //right shift b 1 time and left shift c 1time and do or operation
    printf("\n %x", a);
}
