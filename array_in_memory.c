#include<stdio.h>
int main() {
      int array[5];

      printf("Enter marks of five students pls : \n");
      

      for (int i =0 ; i<5; i++){     // the one value of array stores 4 bytes 
        scanf("%d",&array[i]);        // so here if the user enters say 4,7,8,9,5;
      }            // then lets say 4 will be at 6422276 ,then 7 is at 642280  and so on ;
 

      for (int  i = 0 ; i<5;i++){
        printf("The address of these marks are :%u\n", &array[i]);
      }
  
 return 0;
}