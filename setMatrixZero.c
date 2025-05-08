// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int a[3][3] = {{1,2,3},{4,0,6},{7,8,9}};

void validate(int val, int i, int j, int r, int c);
void setMatrixZero(int a[3][3], int r, int c){
    int i = 0;
    int j = 0;
    int flag = 0;
    
    printf("Print matrix\n");
    for(i = 0; i< r ; i++){
        for(j = 0; j< c; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Validate Matrix\n");
    for(i = 0; i< r ; i++){
        for(j = 0; j< c; j++){
         //   printf("%d", a[i][j]);
            int val = a[i][j];
            if (val == 0) {
                validate(a[i][j], i, j, r, c);
                flag = 1;
            } 
            if (flag == 1 ) break;
        }  
    }
    
    printf("After Set Matrix Zero\n");
     for(i = 0; i< r ; i++){
        for(j = 0; j< c; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
     }
}

void validate(int val, int i, int j, int r, int c){
    int m = 0;
    int n = 0;
    printf("validate a[%d, %d]\n", i, j);
    for(n = j; n < c; n++){
        printf("a[%d][%d]\n", i, n);
        a[i][n]  = 0;
    }
    for(n = 0; n < j; n++){
         printf("a[%d][%d]\n", i, n);
        a[i][n] = 0;
    }
    
    
    for(m = i; m < r; m++){
         printf("a[%d][%d]\n", j, m);
         a[m][j] = 0;
    }
    
    for (m = 0; m< i ;m++){
        printf("a[%d][%d]\n", j, m);
        a[m][j] = 0;
    }
}

int main() {
    //int a[3][3] = {{1,2,3},{4,0,6},{7,8,9}};
    setMatrixZero(a,3,3);

    return 0;
}
