#include <stdio.h>
#include <stdlib.h>

void printArray(int* a, int size){
    printf("Printing the array\n");
    int i = 0;
    
    for(i = 0; i < size; i++){
        printf("%d\n", a[i]);
    }
}

void insertionSort(int* a, int size){
    int i = 0;
    int j = 0;
    int temp = 0;
    
    for(i= 0; i < size -1 ; i++){
        temp = a[i];
        j = i - 1;
        while((j >= 0) && (a[j] > temp)){
            a[j+1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main(){
    int a[]= {10,40,39,50,60,79,20,11,87,99};
    int size = sizeof(a)/sizeof(a[0]);
    printf("Size: %d\n", size);
    
    printArray(&a[0], size);
    insertionSort(&a[0], size);
    printArray(&a[0], size);
    
    return 0;
}
