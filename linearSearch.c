#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int arr[] = {1,2,3,4,5,6};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", size);
    
    int k = 0;
    int flag = 0;
    
    for(int i = 0; i<size; i++){
        if (k == arr[i]) {
            flag = 1;
            printf("Element found\n");
        } 
    }
    if (flag == 0){
        printf("Elements not found\n");
    }
    return 0;
    
}
