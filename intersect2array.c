
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *intersect(int *k, int *l, int val1, int val2, int x){
    int i=0, j=0;
    int n=0;
     int* m = malloc(3 * sizeof(int));
    
    for(i =0; i<val1; i++){
        for(j=0; j<val2; j++){
            if(k[i] == l[j]){
                m[n] = k[i];
                n++;
            }
        }
    }
    
    int *ptr = &m[0];
    return &ptr[0];
}

int main() {
    int a[5] = {1,2,3,4,5};
    int b[3] = {1,2};
    int i =0; int x = 0;
    
    int *k = &a[0];
    int *l = &b[0];
    
    int *c = intersect(k, l, 5, 3, x );
    
    while(c[i] != NULL){
        printf("%d\n",c[i]);
        i++;
    }
    
    return 0;
}
