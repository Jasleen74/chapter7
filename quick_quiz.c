/*Quick Quiz: Write a program to accept marks of five students in an array and print them
on the screen.*/


#include<stdio.h>
int main() {
     int marks[5];

     

     //scanf("%d", &marks[0]);
     //scanf("%d", &marks[1]);
     //scanf("%d", &marks[2]);
     //scanf("%d", &marks[3]);
     //scanf("%d", &marks[4]);

     for (int i = 0; i < 5; i ++){
        printf("Enter the number pls :");
        scanf("%d", &marks[i]);

     }

     for (int i = 0 ; i <5 ; i ++){
        printf("The value is : %d\n", marks[i]);
     }
     
  
 return 0;
}