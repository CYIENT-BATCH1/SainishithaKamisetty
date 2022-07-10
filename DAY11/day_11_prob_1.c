1. Write a program to do binary search in a sorted array. Program should take input of sorted values and search value. 
(Make number of elements as configurable value)
How binary search works is explained below.
 
#include<stdio.h>
int binarySearch(int array[], int x, int low, int high) {
                                           // Repeat until the pointers low and high meet each other
  while(low<=high) {
    int mid=(low+high)/2;                  
    if(array[mid]==x)                      // mid is found,then return it
      return mid;
    if(array[mid]<x)                       
      low=mid+1;                           //search for left half
      else
      high=mid-1;                           //search for right half
  }
  return 0;
}
int main(void) {
  int array[]={3,4,5,6,7,8,9};
  int n=sizeof(array)/sizeof(array[0]);
  int x=8;
  int result=binarySearch(array,x,0,n-1);
  if(result==0)                           //if the result is zero then element is not found
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}
