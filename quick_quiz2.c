/*Quick Quiz: Try these operations on another variable by creating pointers in a separate
program. Demonstrate all the three operations*/
#include<stdio.h>
int main() {
     
      int i = 3;
      int *a = &i; 
     
     
    int j = 4;
    int *b = &j;


    printf("The addition is : %u\n", *b+ *a);
    printf("The Subtraction of a number from a pointer is : %d\n", *b -1);
    printf("The Subtraction of a pointer from a pointer is : %d\n", *b-*a);
    

 return 0;
}
