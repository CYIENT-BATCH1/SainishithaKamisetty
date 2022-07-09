5 balls are numbered with random 1-digit number each. Assign these numbers using user input.
Print whether each ball is assigned odd or even number.
#include<stdio.h>
int main(){
    int i,n;
    for(i=0;i<5;i++){
        printf("enter the number");
    scanf("%d",&n);                         //read the input from the user
        if(n%2==0)                          //if the condition is true then even otherwise false
        printf("even\n");
        else
        printf("odd\n");
    }
}
