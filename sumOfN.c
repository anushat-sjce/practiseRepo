#include <stdio.h>
#include <stdlib.h>

int isSum(int number){
    if(number == 1){
        return 1;
    }    else {
        return number + isSum(number -1);
    }
}

int main(){
    int number = 1;
    
    int k = isSum(number);
    printf("Sum of number: %d\n",k);
    
    return 0;
}

