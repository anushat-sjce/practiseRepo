#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int romanToInt(char* s) {
    int i = 0;
     printf("Entered value is : %s\n", s);
     int size = strlen(s);
     int total = 0;
     
     printf("%d\n",size);
     
     while(s[i] != '\0'){
          //printf("Scanning %s\n", s[i]);
         switch(s[i]){
            case 'I': printf("1");
                    if((s[i+1] == 'V') || (s[i+1] == 'X')) {
                        total = total -1 ;
                    } else {
                        total = total + 1;
                    }
                    break;
            case 'V': printf("5");
                        total = total + 5;
                    break;
            case 'X': printf("10");
                    if((s[i+1] == 'C') || (s[i+1] == 'L')){
                        total = total - 10;
                    } else {
                        total = total + 10;
                    }
                    break;
            case 'L': printf("50");
                    total = total + 50;
                    break;
            case 'C': printf("100");
                    if((s[i+1] == 'D') || (s[i+1] == 'M')){
                        total = total - 100;
                    } else {
                        total = total + 100;
                    }
                    break;
            case 'D':printf("500");
                    total = total + 500;
                    break;
            case 'M': printf("1000");
                    total = total + 1000;
                    break;
            default:
            printf("hello\n");
            return -1;
         }
         i++;
     }
     return total;
}

int main(){
    char rvalues[10];
    
    printf("Enter number\n");
    scanf("%s", &rvalues);
    
    printf("Entered value is : %s\n", rvalues);

    int k = romanToInt(&rvalues[0]);
    printf("Total value : %d\n", k);
    return 0;
}
