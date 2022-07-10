2 A message ID is required to send data via CAN communication between ECU’s. Accept a random 2-digit message ID from the user to send data. 
  Keep in mind that the given ECU only accepts binary form of the message ID. Write a program to convert the 2-digit ID to binary form.  
#include <stdio.h>
int main()
{
    int n,x,i;
    printf("enter the id");
    scanf("%d",&n);                           //Read the input id from the user
    for(i=7;i>=0;i--){                        //Using for loop to check the condition until the condition become false
        x=(n>>i)&1;                           //n right shift with i times and do AND operation
        printf("%d",x);
    }
} 
