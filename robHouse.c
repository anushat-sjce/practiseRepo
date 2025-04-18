#include <stdio.h>
#include <stdlib.h>

int robHouse(int *a, int size){
    int sum = 0;
    int i = 0;
    
    for(i = 0; i< size;i= i+2){
        sum = a[i] + sum;
    }
    
    return sum;
}
   
int main(){
    int array[10] = {1,34,78,5,89,23,56,22,20,4};
    
    int size = sizeof(array)/sizeof(array[0]);
    printf("%d\n", size);
    
    int k = robHouse(&array[0], size);
    printf("sum robbed : %d\n", k);
    return 0;
}
