#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size){
    int i = 0;
    for(i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}

void bubbleSort(int a[], int size){
    int i = 0, j = 0;
    int temp = 0;
    
    for(i = 0;i<size;i++){
        for (j = 0; j<size-i-1;j++){
            if(a[j]> a[j+1]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1,2,43,12,67,45,97,45,34,90};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("size of array : %d\n", size);
    
    display(&arr[0], size);
    bubbleSort(&arr[0], size);
    
    printf("----Sorted Array----\n");
    display(&arr[0], size);

    return 0;
}
