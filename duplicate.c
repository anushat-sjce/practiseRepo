#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int a[5] = {1, 2, 3, 4, 5};
    int i = 0, j = 0, flag = 0;

    for(i = 0; i< 5; i++)
    for(j = 1; j< 5; j++){
        if((a[i] == a[j]) && (i != j)){
            flag = 1;
            break;
        } 
    }
    
    if(flag == 1){
        printf("duplicate found\n");
    } else {
        printf("distinct numbers found\n");
    }
    return 0;
}
