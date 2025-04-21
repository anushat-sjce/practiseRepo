#include <stdio.h>
#include <stdlib.h>
int missingNumber(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
  //  int flag = 0;
    
    for(i = 0; i < numsSize+1; i++){
        if(nums[i] == j){
            printf("%d found\n", j);
            j++; i = 0;
        } else {
            printf("%d not found\n", j);
        }   //printf("element %d not found\n",j);
    }
    return j ;
}

int main(){
    int a[]= {0,1,2,7,4,5,6,8};
    int size = sizeof(a)/sizeof(a[0]);
    
    printf("%d\n", size);
    int k =  missingNumber(a, size);
    printf("%d here not found\n", k);
    return 0;
}
