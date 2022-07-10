4)EVEN AND ODD NUMBER USING CONDITIONAL OPERATOR
#include <stdio.h>
int main()
{
   int a;
   printf("enter the number\n");
   scanf("%d",&a);                                    //Read the input from the user
   a%2==0?printf("even "):printf("odd ");            //conditional operator is true then even 
}
