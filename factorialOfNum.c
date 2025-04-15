// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int number){
    if(number == 1){
        return 1;
    } else if(number == 0) {
        return 1;
    } else
        {
        return number * fact(number-1);
    }
}

int main() {
int number = 5;

int k = fact(number);
printf("Summation of K numbers : %d\n", k);
return 0;
}
