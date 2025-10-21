#include<stdio.h>
int main() {
     int marks []= {7,8,9,4};
     int * ptr = &marks[0];  // we can also write this as int * ptr = &marks


     for (int i = 0 ; i<4; i ++){
        printf("the value at index %d is : %d \n", i , *ptr);
        ptr ++;
     }
 

  
 return 0;
}