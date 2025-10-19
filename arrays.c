#include<stdio.h>
int main() {
     int marks [90];  // Reserve space to store 90 integers

     marks[0] = 45;
     marks[1] = 7;

     printf("the marks are : %d and %d", marks[0] , marks[1] );
  // We can go till marks[89] only cuz ofc we are starting from 0 
  
 return 0;
}