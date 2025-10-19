#include<stdio.h>
int main() {
     int marks[5] = {7,8,9,4,5};   // here we can specify the values simply

     float marks2[] = { 2.3,4.5,45.6,5.7,7.7}; // or we dont even need to write the thing in [] we can simply just enter the values 

    for(int i = 0 ; i<5 ; i ++){
        printf("%d ", marks[i]);
        
    }
    printf("\n----------------------------------\n");

    for(int i = 0 ; i<5 ; i ++){
        printf("%.2f ", marks2[i]);
        
    }
  
 return 0;
}