2. Write a program in C to sort an array using Pointer. The sample output must be as below
Program:
 
#include <stdio.h>
void Sort(int n,int* p)
{
 int i,j,temp;
    for (i=0;i<n;i++){
        for (j=i+1;j<=n;j++){
            if(*(p+j)<*(p+i)){              //if the condition is less than then swap the value 
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
           }           
        }
    }
    for(i=0;i<n;i++)
    printf("%d\n",*(p+i));                 //print the value
}
 int main()
{
    int n=5;
    int a[]={25,45,89,15,82};             
        Sort(n,a);                         //calling the function
        return 0;
 } 
