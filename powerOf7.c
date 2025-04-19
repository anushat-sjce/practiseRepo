#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int flag = 1;

int powerOfThree(int number){
    
    if(number <= 0){
        return 0;
    }
    
    while(number % 7 == 0){
        number = number / 7;
    }
    
    if(number != 1)
        return 0;
    else 
        return 1;
}

int main(){
    int number;
    
    printf("Enter number\n");
    scanf("%d", &number);
    
    int k = powerOfThree(number);
    if (k){
        printf("Number is powerOfThree\n");
    } else {
        printf("Number is not a power of three\n");
    }
    return 0;
}
