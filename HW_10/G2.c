#include <stdio.h>

int main() {
    FILE *f;
    f = fopen("input.txt","r");
    int N;
    fscanf(f, "%d", &N);
    if (N > 26) {
        printf("Error\n");
    }
    fclose(f);
    
    f = fopen("output.txt","w");
    
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            fprintf(f,"%c",'A'+(i / 2));
        }
        else {
           fprintf(f, "%d", 2 + ((i / 2) % 4) * 2);
        }
    }
    
    fclose(f);
    
    return 0;
}
