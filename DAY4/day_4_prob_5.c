5)POSITIVE OR NEGATIVE NUMBER USING CONDITIONAL OPERATOR

#include <stdio.h>

int main()
{
    int a;
    printf("enter value of a\n");
    scanf("%d",&a);                                       //Read the input from the user
    a>=0?printf("Positive "):printf("Negative ");         //conditional operator is true then positive 
}
