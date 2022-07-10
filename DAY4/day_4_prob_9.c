GIVEN NUMBER IS POWER OF 2 OR NOT
#include <stdio.h>

int main()
{
    int a,x,count=0;
    printf("enter a value\n");
    scanf("%d",&a);                 //Read the input from the user
    while(a>0){                     //check the while condition is true then excute the loop
       x=a&1;
       a=a>>1;
       if(x==1)                     //if x equal to 1 then increment the count
       count++;
    }
    if(count==1)                    //if the count equal to 1 then number is 2 power n
    printf("2 power n");
    else
    printf("Not 2 power n");
}
