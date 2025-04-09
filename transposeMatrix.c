#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayMatrix(int *ptr ,int row, int column){
    int i=0,j=0;
    for(i =0 ;i <row; i++){
        for (j=0;j<column;j++){
            printf("%d\n",*(ptr + i * column + j));
        }
        printf("\n");
    }
}

int* transpose(int *ptr, int row, int column){
    int i =0, j =0;
    int* transposeM = (int *)malloc(row*column *sizeof(int*));
    
    for (i=0;i<row ; i++){
        for(j=0;j<column; j++){
            *(transposeM + j * row +i ) = *(ptr + i *column + j);
            printf("%d\n",*(ptr + j *row + i));
        }
    } 
    return transposeM;
}

int main() {
    int a[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
    int row = 3;
    int column = 3;
    
    int *ptr = &a[0][0];
    displayMatrix(ptr,row,column);
    
    int *ptr1 = transpose(ptr, row, column);
    printf("\n");

    displayMatrix(ptr1, row, column);
    free(ptr1);
    
    return 0;
}
