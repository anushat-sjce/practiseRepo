
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse(char *n){
    int i =0;
    char temp;
    int len = strlen(n);
    int j = len;
    
    printf("%d\n",len);
    while(i < len/2){
        temp = n[i];
        n[i] = n[j -i-1];
        n[j -i] = temp;
        i++;
    }
    
    printf("Reversed string is : %s",n);
}

int main () {
    
    char name[10] = {'a','n','u','s','h','a'};
    char *ptr = &name[0];
    
    printf("%s\n",name);
    reverse(ptr);

    return 0;
}
