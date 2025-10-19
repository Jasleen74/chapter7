#include<stdio.h>
int main() {
     char a = 7;

     char * ptr = &a;

     printf("The address of a is : %u\n", &a);
     printf("The address of a via pointer is : %u\n", ptr);

     ptr ++;

     printf("The new address is : %u\n", ptr);

     ptr -- ;

     printf("The more new address is : %u \n", ptr);

  
 return 0;
}