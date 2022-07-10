1 /*Write a program to achieve below statements.
Collect 15 elements (8 integers, 7 float) as i/p from user. 
Calculate and Print the sum, average and mean of integers
Calculate and Print the sum, average of all float values
Divide sum in statement ‘b’ with statement ‘c’ sum and print the value.
Divide average in statement ‘b’ with statement ‘c’ average and print the value.
Convert all 7 float values to integers and print them.*/

#include <stdio.h>
int main()
{
    int a[8],i,sum=0,avg,s;
    float b[7],sum1=0,avg1;
     float s1;
    for(i=0;i<8;i++){
        scanf("%d",&a[i]);             //Read input from the user
    sum=sum+a[i];                      //calculate the  8 interger  
    avg=sum/8;                         //sum is divided with 8 integers and stored in average
    }
    printf("integers sum %d and avg %d\n",sum,avg);    //print the sum and average of the given numbers
    for(i=0;i<7;i++){
        scanf("%f",&b[i]);              //Read the input from the user 
        sum1=sum1+b[i];                 //calculate the  7 float 
        avg1=sum/7;                     //sum is divided with 7 float and stored in average
    }
        printf("float sum %f and avg %f",sum1,avg1);
        s=sum/sum1;                     
        s1=avg/avg1;
        printf("div sum int and float %d",s);      //print the sum of integers and float
        printf("div avg int and float %d",s1);     //print the average of integers and float

}
