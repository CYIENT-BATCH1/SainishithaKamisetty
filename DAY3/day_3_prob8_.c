8)Write program to check given i/p by user is alphabet or not alphabet using conditional operator

#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);                                                                     //read the input from the user
   ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("Alphabet"):printf("not alphabet");  //check the condition true then alphabet
}
