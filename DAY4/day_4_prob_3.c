3)BIGGEST OF TWO NUMBERS USING CONDITIONAL OPERATOR
#include <stdio.h>
int main()
{
   int a,b;
  printf("enter the value of a\n");
  printf("enter the value of b\n");
   scanf("%d %d",&a,&b);                               //Read the input from user
    a>b?printf("a is larger"):printf("b is larger"); //conditional operator is true a is larger
}
