#include <stdio.h>
#include <stdlib.h>

void printArray(int* a, int len){
    int i = 0;
    printf("Printing array\n");
    for(i = 0; i < len ; i++){
        printf("%d\n", a[i]);
    }
}

void bubbleSort(int* a, int n){
    int i = 0;
    int j = 0;
    printf("Sorting the array\n");
    for(i = 0; i < n-1 ; i++){
        for(j = 0; j< n-i-1; j++) {
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int a[5] = {1,3,2,4,6};
    
    printArray(&a[0], 5);
    bubbleSort(&a[0], 5);
    printArray(&a[0], 5);
    
    return 0;
}
