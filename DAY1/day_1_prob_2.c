2.//consider a character input from a user and print if it is a vowel or consonants.

#include <stdio.h>
int main()
{
char i;

printf("enter the character\n");
scanf("%c",&i);                            //Read the input from the user
if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'||i=='a'||i=='e'||i=='i'||i=='o'||i=='u')   //if the condition true then print vowels
printf("vowels");

else
printf("consonants");
    return 0;
}
