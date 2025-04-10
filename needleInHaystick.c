// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAR_COUNT 256

int needleInHay(char *s1, char *s2, int m, int n){
    printf("%s %s %d %d\n", s1, s2, m, n);
    int i = 0;
    int j = 0;
    int x = 0;
    
    while((i < m) && (j < n)){
        if (s1[i] == s2[j]){
            i++;
            j++;
            printf("values are %d\n",j);
        } else {
            i++;
            j=0;
        }
    }
    if(j == n){
        return 1;
    }
    return 0;
}

int main() {
    char *str1 = "hellohowareyou";
    char *str2 = "fine";
    
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    
    if(needleInHay(str1, str2, l1, l2)){
        printf("present\n");
    } else {
        printf("not present\n");
    }
    
    return 0;
}
