 3  Write a program to reverse a 3-digit number which is entered from keyboard. 
 ============================================================================

#include <stdio.h>
#include <stdlib.h>
int main(){
	int n=123,r=0;
	while(n>0){                //while the condition satisfy excuted the loop
	r=r*10+n%10;               //To extract the frist and last digits do n modulus of 10
	n=n/10;
	}
	printf("%d",r);            // print the reverse number
}
