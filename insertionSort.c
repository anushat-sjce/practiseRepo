#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size){
    int i = 0;
    for(i = 0; i< size; i++){
        printf("%d\n", arr[i]);
    }
}

void insertionSort(int a[], int size){
    int i = 0, j = 0;
    int temp = 0;
    for(i = 0; i<size; i++){
        j =i;
        while(j>0 && (a[j-1] > a[j])){
            temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}

int main(){
    int arr[] = {10,25,15,30,65};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", size);
    
    display(&arr[0], size);
    
    insertionSort(&arr[0], size);
    
    printf("Array elements after sorting:\n");
    display(&arr[0], size);
    
    return 0;
}
