#include <stdio.h>
#include <stdlib.h>

int main (){
    int number;
    int reverse = 0;
    int remainder = 0;
    
    printf("Enter the number\n");
    scanf("%d", &number);
    
    printf("Entered number : %d\n", number);
    
    while(number != 0){
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    
    printf("The reversed number: %d\n",reverse );
    
    return 0;
}
