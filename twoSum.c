#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0, j = 0;
    int flag = 0; int x = 0;
    for (i =0; i<numsSize; i++){
        x = target - nums[i];
        for (j = 0; j<numsSize; j++){
            if (x == nums[j]){
                flag = 1;
                printf("%d exists\n",nums[j]);
                break;
            } else {
                flag = 0;
            }
        }
    }
}

int main() {
    int a[5] = {0,7,0,2,2};
    int numsSize = 5;
    int target = 4;
    int returnSize = 0;
    
    int* nums = &a[0];
    int* rsize = &returnSize;

    twoSum(nums, numsSize, target, rsize);
    return 0;
}
