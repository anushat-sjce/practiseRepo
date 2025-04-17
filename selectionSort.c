#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size){
    int i = 0;
    for(i = 0;i < size; i++){
        printf("%d\n",arr[i]);
    }
}

void selectionSort(int a[], int size){
    int i = 0, j = 0; 
    int min = 0;
    int temp = 0;
    
    for(i = 0; i < size -1 ; i++){
        min = i;
        for(j = i+1; j <size ; j++){
            if(a[j]< a[min]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}



int main(){
    int arr[] = {90,30,30,60,70};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    printf(" Size of Array : %d\n", size);
    
    display(&arr[0], size);
    
    selectionSort(&arr[0], size);
    
    printf("----Sorting array----\n");
    display(&arr[0], size);
    
    return 0;
}
