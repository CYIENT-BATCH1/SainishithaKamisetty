Write a program to calculate the sum of the first and the second last digit of a 5-digit number entered from the keyboard.

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);                         //read the input from the user
    int n,sum=0,b,c,temp=a;                 
        n=a%10;                             //sum of frist digit by dividing n by 10 until all the values extract
        a=a/10;
        c=a%10;
        a=temp;
   while(a>0){                             //while the condition satisy excuted the loop
       b=a;
        a=a/10;
        sum=b+c;                            //Add the frist and last digit
   }
        printf("%d",sum);
}

