4.//Take a 6-digits number as input from the user and reverse the number .

#include<stdio.h>
int main(){
int x,r=0;
printf("enter the number");
scanf("%d",&x);                      //Read the input from the user
while(x>0){                          //While condition true loop will executed otherwise it will exit the loop
  r=r*10+x%10;
  x=x/10;
}
printf("reverse the number%d",r);
}
