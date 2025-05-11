#include <stdio.h>
#include <stdlib.h>

void printArray(int* a, int size){
    printf("Printing the array\n");
    int i = 0;
    
    for(i = 0; i < size; i++){
        printf("%d\n", a[i]);
    }
}

void selectionSort(int* a, int size){
    int i = 0;int j = 0;
    int min = 0;
    int temp = 0;
    
    for(i = 0 ; i< size-1; i++){
        min = i;
        for(j = i+1; j < size; j ++){
            if (a[j] < a[min]){
                min = j;
            }
            if(min != i){
                temp = a[min];
                a[min] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main(){
    int a[]= {10,40,39,50,60,79,20,11,87,99};
    int size = sizeof(a)/sizeof(a[0]);
    printf("Size: %d\n", size);
    
    printArray(&a[0], size);
    selectionSort(&a[0], size);
    printArray(&a[0], size);
    return 0;
}
