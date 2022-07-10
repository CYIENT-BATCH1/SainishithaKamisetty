7.//Find whether a given 10 digit number is palindrome or not.

#include<stdio.h>
int main(){
long int x=12344321,r=0,temp=x;    //Read the value
while(x>0){                        //while condition satisfy then enter the loop or exist from the loop
  r=r*10+x%10;
  x=x/10;
}
if(temp==r)                        //check the if condition satisfy or not
printf("palindrome");
else
printf("not palindrome");
}
