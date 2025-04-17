#include <stdio.h>
#include <stdlib.h>

void merge(int* a, int nums1Size, int* b, int nums2Size, int p, int q)
{
    int i = 0, j = 0, k = 0;
    int finalSize = p + q ;
    int c[finalSize];
    int temp = 0;
    
    printf("Sum size of 2 arrays: %d\n",finalSize);
    i = p;
    while(j < finalSize){
        a[i] = b[j];
        i++;
        j++;
    }
    
    for( k = 0; k< finalSize; k++){
        printf("%d\n",a[k]);
    }
    
    for(i = 0; i< finalSize -1 ;i++){
        for (j = 0; j< finalSize - i -1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    for( k = 0; k< finalSize; k++){
        printf("%d\n",a[k]);
    }
}

int main(){
    int nums1[] = {10,20,30,40};
    int nums2[] = {5,15,25,35,45};
    
    int nums1Size = sizeof(nums1)/sizeof(nums1[0]);
    int nums2Size = sizeof(nums2)/sizeof(nums2[0]);
    
    printf("%d and %d\n", nums1Size, nums2Size);
    
    merge(&nums1[0], nums1Size, &nums2[0], nums2Size, 3, 2);
    
    return 0;
}
