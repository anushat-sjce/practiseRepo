#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int callFizzBuzz(int n){
    char *array[n];
    int i = 1; int flag = 0;
    
    while (i <= n ){
        if( i % 3 == 0){
            printf("fizz\n");
            flag = 1;
        }
        if (i % 5 == 0){
            printf("buzz\n");
            flag = 1;
        }
        if((i%3 == 0) && (i%5 == 0)){
            printf("fizzbuzz\n");
        } 
        
        if(flag == 0){
            printf("%d\n",i);
        }
        i++;
        flag = 0;
    }
}
   
int main(){
    int number;
    
    printf("Enter the number\n");
    scanf("%d", &number);
    
    callFizzBuzz(number);
    
    return 0;
}
