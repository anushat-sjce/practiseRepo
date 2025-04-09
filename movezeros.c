#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void moveZeros(int* nums, int numsSize){
    int i = 0, j =0;
    int temp = 0;
    int count = 0;
    int b[5] ;
    
    while (i < numsSize) {
        if (nums[i] == 0) {
            count++;
            i++;
        } else {
            b[j] = nums[i];
            j++;
            i++;
        }
    }
    
    i = 0;
    while(i < count){
        b[j] = 0;
        j++;
        i++;
    }
    
    for (i=0;i<numsSize;i++){
        printf("%d\n",b[i]);
    }
   
}

int main() {
    int a[5] = {0,7,0,2,3};
    int numsSize = 5;
    
    int* nums = &a[0];

    moveZeros(nums, numsSize);
    return 0;
}
