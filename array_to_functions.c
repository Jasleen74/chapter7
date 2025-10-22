#include<stdio.h>
void add_array (int array[]){
    array[2]= array[2] +1 ;
}
int main() {
    int myarray[4] = {6,2,3,4};

    printf("the first element is : %d\n", myarray[2]);

    add_array(myarray);

    printf("the result will be the change in the  element from 6 to %d", myarray[2]);
     
  
 return 0;
}