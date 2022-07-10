5 A message is encoded in the form of numbers and sent to you. Write a program to decode the message. (HINT: A=1, B=2, … so on) 

#include <stdio.h>
#include <stdlib.h>
int main(){                   
	int n=2,r;              
	r=64+n;                 //r=64+n this is used to decode the message
	printf("%c",r);
}
