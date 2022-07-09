#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    printf("enter 9 digits\n");
    scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i);   //Read the 9 inputs from user
    printf("After swapping\n");                                       //swap 'a' and 'b'
   a=a+b;                                                             //a is now 10 and b is 20 after swapping it become a=20 and b=10
   b=a-b;
   a=a-b;
    printf("%d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i);
}
