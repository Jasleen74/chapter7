/*Quick Quiz: Create a 2-d array by taking input from the user.*/
#include<stdio.h>
int main() {
     int arr [2][2];
      
     // FOR USER INPUT 
     for (int i = 0; i<2; i ++)                  // for rows 
     {                   
        for (int  j = 0; j < 2; j++)                // for columns
        {
            printf("Enter the value for [%d,%d]: ", i , j );
            scanf("%d", &arr[i][j]);
        }
        
     }

     // FOR PRINTING THE ELEMENTS OF THE ARRAY LIKE A MATRIX 
     
     for (int i = 0; i < 2; i++)                // for rows
     {
        for(int j = 0 ; j<2; j ++){             // for columns
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
     
  
 return 0;
}
