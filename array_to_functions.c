#include<stdio.h>
void add_array (int array[]){
    array[0]= array[0] +1 ;
}
int main() {
    int myarray[4] = {6,2,3,4};

    printf("the first element is : %d\n", myarray[0]);

    add_array(myarray);

    printf("the result will be the change in the  element from 6 to %d", myarray[0]);
     
  
 return 0;
}