#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int flag = 0;

int printPrime(int number){
    float i = 0;
    int j = 0;
    int result = 0;
    //int array[];
    
    for(j = 2; j*j <= number; j++){
        if(number % j == 0){
       //     printf("Number %d is not prime\n", number);
            flag = 0;
            return 0;
        }
    }
  //  printf("Number %d is prime\n", number);
    flag = 1;
    return number;
}
   
int main(){
    int number;
    int i , arr[50];
    int k = 0;int m = 0;
    
    printf("Enter the number\n");
    scanf("%d", &number);
    
    for(i = 2; i <= number; i++){
       int k = printPrime(i);
       if(flag == 1){
            arr[m]  = k;
            printf("%d\n", arr[m]);
            m++;
       }
    }
    
    return 0;
}
