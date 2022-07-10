1 Find common elements in three sorted arrays, 3 array values are given as input to program.

PROGRAM:
#include<stdio.h>
int main(){
    int a[]={1,4,5,6,7};                        //assign three array 
    int b[]={4,6,3,1,3};
    int c[]={3,6,8,4,1};
    int i,j,k;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i]==b[j])                     //check the array of i elements are equal to array of j are not
            for(k=0;k<5;k++){
                if(b[j]==c[k])                 //check the array of j elements are equal to array of k are not
                printf("%d",c[k]);             //print the sorted array
            }
        }
        
    }
} 
