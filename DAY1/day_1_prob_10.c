Consider the weights of three people as user input. Find the heaviest among them and print it.
  
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 3 weight");
    scanf("%d %d %d",&a,&b,&c);                                                             //Read the 3 inputs from the user
   a>b&&a>c?printf("a is larger"):b>c&&b>a?printf("b is larger"):printf("c is greater");    //check the number which is greater by checking the condition
    return 0;
}
