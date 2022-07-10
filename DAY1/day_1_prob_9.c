9.Implement basic logic gates using C (AND, OR, NOT). Consider the inputs: 

#include <stdio.h>

int main()
{
   int x,y,z,z1,z2;
    printf("enter  x");
    printf("enter y");
    scanf("%d %d" ,&x,&y); //Read the 2input from the user
    z=x&&y;                //X and Y do AND operation and store in Z
    z1=x||y;               //X and Y do OR operation and store in Z
    z2=!x;                 //Do X is NOT EQUAl operation and store in Z
    printf("%d,%d,%d",z,z1,z2);

    return 0;
}
