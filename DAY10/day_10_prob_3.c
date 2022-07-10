3. Write a program to Implement ”Selection Sort” using Recursion for given elements 
(Number elements will vary, so make it as configurable item)
How Selection sort works is explained below.

  #include <stdio.h>
int selectionsort(int a[],int len){
    for(int i=0;i<=len-1;i++){
        for(int j=i+1;j<=len;j++){
            if(a[i]>a[j])                           //if the condition is true then excute the loop 
                a[i]^=a[j]^=a[i]^=a[j];             // swap the element above the condition true
        }
         
    }
}
int main()
{
    int a[]={20,12,10,15,2};
   int len=5;
    selectionsort(a,5);                           //calling function
    for(int i=0;i<5;i++)
    printf("%d  ",a[i]);                          //print the sorted array
    return 0;
}
