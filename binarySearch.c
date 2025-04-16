#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Bsearch(int arr[], int min, int max, int value){
    if(min > max) {
        printf("Value not found\n");
        return -1;
    } else {
        int mid = (min + max)/2;
        
        if(arr[mid] == value){
            return mid;
        } else {
            if(arr[mid] > value){
                return Bsearch(arr, min, mid-1, value);
            }
            if(arr[mid] < value){
                return Bsearch(arr, mid+1, max, value);
            }
        }
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int value = 100;
  
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", size);
  
    int min = 0;
    int k = Bsearch(&arr[0], min, size-1, value);
  
    printf("The element is found at %d position\n", k);
    return 0;
}
