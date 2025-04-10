// Online C compiler to run C program online
// find longest common prefix.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findPrefix(char *str[], int index, int count){
    int i = 0;
    int j = 0;
    
    printf("%d index and %d count\n", index, count);   
    while(i<count){
         if(str[i] != str[j]){
             j=0;
         }
         if(str[i] == str[j]){
             i++;
             j++;
         }
    }
    
    printf("%d matching characters\n",j);
 }

int main() {
    char *str[3] = {"flowers","flow","flight"};
    int i =0;
    int lowest;
    int index;
    
    int len = sizeof(str)/sizeof(&str[0]);
    printf("%d length\n",len);
    
    int count[len];
    for(i = 0; i<len ; i++){
        count[i] = strlen(str[i]);
        printf("length of %d element %d\n",i, count[i]);
    }
    
    lowest = 0;
    for(i = 0; i<len; i++){
        if(count[i] < count[i+1]){
            lowest = count[i];
            index = i;
        }
    }
    printf("%d lowest\n", index);
    
    printf("lowest string : %s and index : %d\n",str[index], index);
    findPrefix(&str[0], index, count[index]);
    return 0;
}
