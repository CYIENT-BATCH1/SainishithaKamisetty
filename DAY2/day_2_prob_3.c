3 It was Raj's first day at school. His teacher asked the students to meet every other student in the class and to introduce themselves. 
The teacher asked them to give handshakes when they meet each other. If there are ‘n’ number of students in the class then 
find the total number of handshakes made by the students.

#include <stdio.h>
int main()
{
 int n,x;
 printf("total number of student");
 scanf("%d",&n);                           //Read input from the user
 x=n*(n-1);                                //To get number of handshakes n*(n-1) 
 printf("number of handshakes is%d",x);    //print the handshakes
 
}
