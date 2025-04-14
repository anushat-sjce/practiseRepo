#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int powe(int number, int power){
    if (number == 1) {
        return 0;
    } 
    if (power == 1){
        return number;    
    }else {
        return number * (pow (number,power-1));
    }
}

int main() {
    int number = 2;
    int power = 4;
    
    int k = powe(number, power);
    printf("value : %d\n",k);
    
    return 0;
}

