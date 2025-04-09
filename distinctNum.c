#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int findSingleNum(int *arr, int num){
    int result = 0;
    int i = 0;
    
   // printf("%d\n", *arr);
    while( i<num ){
        result = arr[i] ^ result;
        i++;
    }
    return result;
}

int main() {

    int a[5] = {1, 2, 2, 6, 6};
    int val = 0;
    int *ptr = &a[0];

    val = findSingleNum(ptr, 5);
    printf("%d\n",val);
    return 0;
}
