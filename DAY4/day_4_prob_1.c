1 SWAPPING OF TWO NUMBERS WITH USING THIRD VARIABLE
#include <stdio.h>
int main()
{
    int a=10;
    int b=20;
    int c;
    c=a;               //swapping the variables without thrid variable
    a=b;
    b=c;
    printf("swapping of two numbers %d %d",a,b);
}
