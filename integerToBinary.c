#include <stdio.h>
#include <stdlib.h>

int main (){
    int number;
    int arr[20];
    int i = 0;
    printf("enter number\n");
    scanf("%d", &number);
    
    while(number != 0){
        arr[i] = number % 2;
        number = number / 2;
        i++;
    }
    
    printf("%d\n", i);
    
    while(i > 0){
        printf("%d",arr[i]);
        i--;
    }
    
    return 0;
}
