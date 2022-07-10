1 Consider the phone number of a person as user input and find the sum of its digits. 
#include <stdio.h>

int main()
{
    long int n,i=0,sum=0;
    printf("enter the digits");
    scanf("%d",&n);                      //Read the input as phone number by the user
    while(i<=10){                        //Check the condition satisfy then enter the loop 
        sum=sum+n%10;                    //sum=sum+n%10 do n mod with 10 and store in sum
        n=n/10;                          //n=n div with 10 and store in n
        i++;                             //increment the value
    }
    printf("%d",sum);

    return 0;
}
