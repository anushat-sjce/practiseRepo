#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[5]={10, 20, 30, 40, 50};
    int count = 0;
    int i =0, j=1;
    
    while(j<5){
        if (a[i] != a[j]){
            count++;
            j++;
            i++;
        } else {
            i=j;
            j=j+1;
        }
    }
    printf("%d\n",count +1 );
    return 0;
}
