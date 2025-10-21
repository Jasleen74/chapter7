#include<stdio.h>
int main() {
      int arr [2][2] = {{7,4},      // two dimensional array 
                        {8,6}};  

    printf("%d\n", arr[0][0]);  // acessing the elements of the arrays
    printf("%d\n", arr[0][1]);      // here 2d array also stores the same memeory of 4 bytes in the order like
    printf("%d\n", arr[1][0]);     // for 7 -- 6422288 , 4--6422292 , 8 --6422296____ and so on 
    printf("%d\n", arr[1][1]);

    printf("The adress of %d is : %u\n",arr[0][0] ,&arr[0][0]);
    printf("The adress of %d is : %u\n",arr[0][1] ,&arr[0][1]);
    printf("The adress of %d is : %u\n",arr[1][0] ,&arr[1][0]);
    printf("The adress of %d is : %u\n",arr[1][1] ,&arr[1][1]);
  
 return 0;
}