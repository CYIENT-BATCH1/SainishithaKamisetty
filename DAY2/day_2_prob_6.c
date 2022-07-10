6 Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 
#include <stdio.h>

int main()
{
 int c,f,t;
 printf("enter the temperature");
 scanf("%d",&c);                                  //read the input from the user
 f=c*9/5+32;                                      //This formula f=c*9/5+32 used to convert farenheat to celius
 c=5/9*(f-32);                                    //This formula c=5/9*(f-32) used to convert farenheat to celius
 printf("convert celius to farenheat%d\n",f);     //print the farenheat
 printf("farenheat to celius %d\n",c);            //print the celius
}
