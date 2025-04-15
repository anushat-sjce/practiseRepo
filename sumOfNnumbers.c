// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumOfN(int number){
    if(number == 0){
        return 0;
    } else {
        return number + sumOfN(number-1);
    }
}

int main() {
int number = 5;

int k = sumOfN(number);
printf("Summation of K numbers : %d\n", k);
return 0;
}
