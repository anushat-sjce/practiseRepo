#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(int num){
    int i = 0;
    int remainder = 0;
    int reversed = 0; 
    
    while(num !=0 ){
        remainder = num % 10;
        reversed = reversed*10 + remainder;
        num = num / 10;
    }
    printf("%d\n", reversed);
}

int main () {
    int num = 4167;
    
    printf("number : %d\n",num);
    reverse(num);
    
    return 0;
}
