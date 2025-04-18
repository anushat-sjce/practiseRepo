#include <stdio.h>
#include <stdlib.h>

int sellCommodity(int *a, int size){
    int i = 0, j = 0;
    int lindex = 0, hindex = 0;
    int low = 0, high = 0;
    low = a[i];
    
    for(i = 0; i < size; i++){
        if (low > a[i]){
            low = a[i];
            lindex = i;
        }
    }
    printf("Lowest stock price %d found at %d position\n", low, lindex);
    if (lindex == size){
        printf("lowest stock price found at the end. Cant sell\n");
        return 1;
    }
    
    high = a[j];
    for(j=lindex+1; j<size ; j++){
        if(high < a[j]){
            hindex = j;
            high = a[j];
        }
    }
    printf("highest stock price %d found at %d position\n", high, hindex);
    
    int profit = (high - low);
    return profit;
}


int main(){
    int array[10] = {1,34,78,5,89,23,56,22,20,4};
    
    int size = sizeof(array)/sizeof(array[0]);
    printf("%d\n", size);
    
    int k = sellCommodity(&array[0], size);
    printf("Profit : %d\n", k);
    return 0;
}
