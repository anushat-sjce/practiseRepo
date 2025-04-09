#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i =0;
    int b[digitsSize];
    while( i < digitsSize-1 ){ 
        b[i] = digits[i];
        i++;
    }
    b[i] = digits[i] + 1;
    
    int *ptr = (int *)malloc(digitsSize*sizeof(int*));
    ptr = &b[0];
    
    printf("XXX %d\n",ptr[0]);
    return ptr;
}

int main() {
    int a[3] = {1,2,7};
    int size = 3;
    int *k = NULL;
    int i = 0;
    
    int *ptr = &a[0];
    int *l = plusOne(ptr, size, k );
    
    while(i < size){
        printf("%d\n",l[i]);
        i++;
    }
    
    //free(l);
    return 0;
}
