#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int BS(int arr[], int min, int max, int value){
    if(min > max){
        return -1;
    } else {
        int mid = (min + max) /2;
        printf("value of mid:%d\n",mid);
    
        if (arr[mid] == value){
            return mid;
        } else {
            if(value < arr[mid]){
                max = mid-1;
                return BS(arr, min, max, value);
            }
        if(value > arr[mid]){
            min = mid +1;
            return BS(arr, min, max, value);
        }
    }
}
}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int value = 3;
    int k = BS(&arr[0], 0,9,value);
    
    printf("Value of K: %d\n", k);
    
    return 0;
}
