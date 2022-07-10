7 Find the number of leap years in the interval 1990-2022.
#include <stdio.h>

int main()
{
 int year=1990,count=0;
 while(year<=2022){                  //while condition satisy executed the loop 
     if(year%4==0){                  // divide the year with 4
         count++;                    //increment the count
     }
year++;                              //increment count of year
 }
 printf("%d",count);                 //print the count
}
