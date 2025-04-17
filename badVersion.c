#include <stdio.h>
#include <stdlib.h>

int firstBadVersion(int n) {
    if (n > 5) {
        printf("Badversion false : ");
        return 0;
    } else {
        printf("Badversion true : ");
        return 1;
    }
}

int main(){
    int x = 9;
    int y = 0;
    
    printf("Enter the version number\n");
    scanf("%d", &y);
    
    int k = firstBadVersion(y);
    printf("%d\n", k);
    return 0;
}
