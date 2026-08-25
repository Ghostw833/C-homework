#include <stdio.h>

void print_digit(char s[]) {
     
    
    int count[10] = {0}; 
    for (int i = 0; s[i] != '\0'; i++) {
        int digit = s[i] - '0';
        if (digit >= 0 && digit <= 9) {
        count[digit]++;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d %d\n", i, count[i]);
        }
    }
}


