3.The entire area of a circular garden is to be covered with grass by a gardener .
   the radius of the garden is given by the user input.calculate the area that has to be covered
#include<stdio.h>
int main(){
    int r,a;
    printf("the radius of the garden");
    scanf("%d",&r);                              //Read the input from the user
    a=3.14*r*r;                                  //calulate the area using formula
    printf(" area of garden is %d ",a);          
}
