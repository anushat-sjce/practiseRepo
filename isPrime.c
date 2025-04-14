#include <stdio.h>
#include <stdlib.h>

int isPrime(int number, int x){
    if (x ==1){
        return 1;
    } else {
        if (number % x == 0){
            return 0;
        }
        else {
            return isPrime(number, x-1);
        }
    }
}

int main(){
    int number = 66;
    int x = 66/2;
    
    int k = isPrime(number, x);
    if (k == 1){
        printf("Number is Prime\n");
    } else {
        printf("Number isnt Prime\n");
    }
return 0;
}

