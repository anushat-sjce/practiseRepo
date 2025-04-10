// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAR_COUNT 256

int isPalindrome(char *str){
    int len = strlen(str);
    int i = 0;
    int j = 0;
    int flag = 0;
    
    printf("%d\n", len);
    j = len;
    for( i=0; i<len/2; i++){
        if (str[i] == str[j-i-1]){
            flag = 1;
        } else {
            flag = 0;
        }
    }
    return flag;
}

int main() {
    char str[] = "mo   m";
    int i =0;
    int j =0;
    
   // printf("%s\n",str);
    int len = strlen(str);
    char str2[len];
    for(i = 0; i< len ;i++){
        if(str[i] != ' '){
            str2[j] = str[i];
            j++;    
        }
    }
    printf("%s\n",str2);
    
    if(isPalindrome(str2)){
        printf("palindrome");
    } else {
        printf("not a palindrome\n");
    }
    return 0;
}
