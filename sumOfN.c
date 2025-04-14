#include <stdio.h>
#include <stdlib.h>

int isSum(int number){
    if (number == 0){
        return 0;
    }
    
    if (number == 1){
        return 1;
    } else {
        return number + isSum(number -1);
    }
}

int main(){
    int number = 0;
    
    int k = isSum(number);
    printf("Sum of number: %d\n",k);
    
    return 0;
}

