#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(char** names, int size){
    int i = 0;
    for (i=0;i<size;i++){
        printf("%s\n",names[i]);
    }
}

void reverseString(char** names, int size){
    int i =0 ;
    char *temp;
    int j = size;
 
    while(i <size/2){
        temp = names[i];
        names[i] = names[j-i-1];
        names[j-i-1] = temp;
        i++;
    }
}

int main () {
    
    //char *name[] = {"a","n","u","s","h","a"};
    char *name[] = {"h","a","n","a"};
    
    int size = sizeof(name)/sizeof(&name[0]);
    printf("size : %d\n",size);
    display(&name[0], size);
 
    reverseString(&name[0], size);
    display(&name[0],size);
    return 0;
}
