// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAR_COUNT 256

int isPalindrome(char str[], int len){
    int i =0; 
    int flag = 0;
    int j = len;
    
    printf("%s\n", str);
    
    for(i=0;i<len/2;i++){
        if(str[i] != str[j-i-1]){
            return 0;
        }
        else 
            return 1;
    }
}

int main() {
    char str1[] = "moom";
    int len = strlen(str1);
    
    printf("%d\n",len);
    if(isPalindrome(str1,len)){
        printf("true");
    } else {
        printf("false");
    }
    
    return 0;
}
