#include <stdio.h>
#include <stdlib.h>

void merge(int* a, int nums1Size, int* b, int nums2Size, int p, int q)
{
    int i = 0, j = 0, k = 0;
    int finalSize = p + q ;
    int c[finalSize];
    printf("Sum size of 2 arrays: %d\n",finalSize);
    
    while((i <= p) && ( j <= q)){
            if (a[i] < b[j]){
                c[k] = a[i];
                k++;i++;
            } else {
                c[k] = b[j];
                k++;j++;
            }
    }
    if (i != p) {
        c[k] = a[i];
        k++;
        i++;
    }
    
    if (j != q) {
        c[k] = b[j];
        k++; j++;
    }

    
    for (i = 0; i<finalSize; i++){
        printf("%d\n", c[i]);
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
