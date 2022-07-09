1.//we'll say a number is special if it is a multiple of 11 or if it is one more than a multiple of 11.print "special"
  if the given non-negative number is special.use the %"mod" operator.
      
    #include<stdio.h>
    int main(){
    int val;
    printf("enter the number");     
    scanf("%d",&val);                //Take input from the user
    if(val%11==0)                    //check the if condition if it satisfy then special
        printf("Special");
        else
        printf("Non Special");
