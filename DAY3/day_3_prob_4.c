4)Convert decimal number 204 to hexvalue, binary value and print the same
#include <stdio.h>
int main()
{
    int n=204,x=n;
    int r,h,b,i;
   while(n!=0){                         // while the condition NOT EQUAL zero enter the loop
        r=n%16;                         // To get the last digit do n modulus of 16
        n=n/16;                         // To get the last digit do n divide of 16
        if(r<=0||r<=9)                  // if the condition true enter the loop
        h=r+48;
        else
        h=r+55;
    printf("%c",h);                    //dec to hexa   
    }
    printf("\n");
       x==n;
    for(i=7;i>=0;i--){
        b=(x>>i)&1;
        printf("%d",b);                //dec to bin
    }
  }
