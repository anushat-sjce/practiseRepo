// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ransomNote(char* a, char* b){
    printf("%s\n", a);
    printf("%s\n", b);
    
   // int count[256] = {0};
    int len2 = strlen(b);
    int len1 = strlen(a);
    
    printf("%d and %d\n", len1, len2);
    
    int i = 0; 
    int j = 0;
    int count = 0;
    int flag = 0;
    
    while(a[i] != '\0'){
        while(b[j] != '\0'){
            printf("%c and %c\n", a[i], b[j]);
            if (a[i] == b[j]){
                i++;
                count++;
                j = 0;
            } else {
                j++;
                printf("here\n");
               // break;
            }
        } i++;
    }
    printf("flag :%d\n", flag);
    if (count == len1){
        printf("words can be constructed\n");
    } else {
        printf("No words cant be constructed\n");
    }
}


int main() {
    char* a = "abc";
    char* b = "aab";
    
    ransomNote(a, b);
    return 0;
}
