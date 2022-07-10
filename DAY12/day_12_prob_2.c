Find empty strings in an array of strings (Array of strings will be given as input to program) 
and print the position of array where empty string is present. And replace the empty string array element as “CYIENT”


#include <stdio.h>
int main()
{
    char *a[]={"apple","fruit", " ","orange","mango"};              //assign group of strings
    int size=sizeof a/sizeof(a[0]);
    int pos=0;
    printf("%d",size);
    int i;
    for(i=0;i<5;i++){
        printf("\n");
        if(a[i]==" "){                                           //In place of empty string we are assign "CYIENT"
         a[i]="cyient";
         pos=i;
    printf("%s",*(a+i));
        }
    }
     printf("pos=%d\n",pos);                                     //use to find the position and print the position
    return 0;
}
