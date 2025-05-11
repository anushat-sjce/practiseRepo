#include <stdio.h>
#include <stdlib.h>

void printArray(int* a, int n){
    int i = 0;
    printf("Printing element of the array\n");
    for(i= 0; i< n ;i++){
        printf("%d\n", a[i]);
    }
}

int binarySearch(int* a, int low, int high, int target){
    int i = 0;
    
    while(low <= high){
        int mid = (low + high)/2;
        
        if (a[mid] == target){
            return 1;
        } if (a[mid] > target){
            high = mid -1;
        } if (a[mid] < target) {
            low = mid + 1;
        }
    }
    return -1;
}


int main() {
    int a[6] = {10, 33, 39, 79, 89, 90};
    printArray(&a[0], 6);
    int k = binarySearch(&a[0], 0, 5, 90);
    if( k == -1){
        printf("Element not found\n");
    } else {
        printf("Element present\n");
    }
    
    return 0;
}
