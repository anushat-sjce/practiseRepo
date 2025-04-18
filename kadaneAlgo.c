#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int *arr, int size){
     int res = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < size; i++) {
        
        // Find the maximum sum ending at index i by either extending 
        // the maximum sum subarray ending at index i - 1 or by
        // starting a new subarray from index i
        maxEnding = (maxEnding + arr[i] > arr[i]) ? 
          									maxEnding + arr[i] : arr[i];
      
        // Update res if maximum subarray sum ending at index i > res
        res = (res > maxEnding) ? res : maxEnding;
    }
    return res;
}
   
int main(){
    int array[10] = {1,-34,78,-5,89,-23,56,22,20,4};
    
    int size = sizeof(array)/sizeof(array[0]);
    printf("%d\n", size);
    
    int k = maxSubArray(&array[0], size);
    printf("maxSubArray : %d\n", k);
    return 0;
}
