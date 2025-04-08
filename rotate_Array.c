
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int k = 3;
    
    int temp = 0;
    int j = 0, i =0;
    
    for (i = 0; i<3 ; i++){
        j=0;
          temp = arr[j];
        while( j < 4){
            arr[j] = arr[j+1];
            j++;
        } 
        arr[j] = temp;
    }
        
    
    for(i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}
