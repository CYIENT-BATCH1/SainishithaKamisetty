2 SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE
#include <stdio.h>
int main()
{
    int a=10;
    int b=20;
    a=a+b;                     //swapping the variables without third variable                 
    b=a-b;
    a=a-b;
    printf("swapping of ywo numbers %d %d",a,b);

    return 0;
}
