5 Right shift the value 0xFE by 3 bits and print the value
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n=0xFE;
	n=(n>>3);                  //right shift n with 3times
	printf("%d",n);            //print the n value
}
