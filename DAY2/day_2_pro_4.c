4 Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he wants to separate all the tickets that have the number 3 in them. 
Find how many such lucky tickets are found in the ‘n’ number of tickets purchased by Kishore.
#include <stdio.h>

int main()
{
 int n[20]={1,2,3,4,5,6,3,4,5,3};    
 int count=0,i=0;
 for(i=0;i<sizeof(n);i++)
 if(n[i]==3){                                //if the condition n==3 then print the count of number
     count++;
     i++;
 }
 printf("counting the digits %d",count);
}
