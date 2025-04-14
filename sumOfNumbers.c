#include <stdio.h>
#include <stdlib.h>

int sumOfNumbers(int num){
    if (num == 0){
        return 0;
    } else {
        return (num%10 + sumOfNumbers(num/10));
    }
}

int main(){
    int number;
    int sum;
    
    printf("Enter numbers\n");
    scanf("%d", &number);
    
    printf("Entered number : %d\n", number);
    sum = sumOfNumbers(number);
    
    printf("sum of numbers : %d\n", sum);
    
    return 0;
}
