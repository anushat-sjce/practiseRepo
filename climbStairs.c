#include <stdio.h>
#include <stdlib.h>

int callCount(int n){
    if (n == 0 || n == 1){
        return 1;
    } else 
    return callCount(n-1) + callCount(n-2);
}

int main(){
    int n = 0;
    
    printf("Enter value of n\n");
    scanf("%d", &n);
    
    int k = callCount(n);
    printf("Number of call Counts: %d\n", k);
   
    return 0;
}
