#include <stdio.h> 

void sort_even_odd(int n, int a[]) {
    int even_pos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            int even = a[i];
            for (int j = i; j > even_pos; j--) {
                a[j] = a[j - 1];
            }
            a[even_pos] = even;
            even_pos++;
        }
    }
}
        
        