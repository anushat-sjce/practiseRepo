//leetcode to find the number which is not repeated twice in the array 
nums = {1,2,2};
here 1 should be that number.

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    int i = 0;

    while( i<numsSize ){
        result = nums[i] ^ result;
        i++;
    }
    return result;
}
