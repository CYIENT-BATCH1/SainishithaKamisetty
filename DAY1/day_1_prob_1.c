    #include<stdio.h>
    int main(){
    int val;
    printf("enter the number");     
    scanf("%d",&val);                //Take input from the user
    if(val%11==0)                    //check the if condition if it satisfy then special
        printf("Special");
        else
        printf("Non Special");
