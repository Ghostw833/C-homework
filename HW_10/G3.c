#include <stdio.h>
#include <string.h>

int main () {
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","w");
    char str[1000];
    fgets(str,sizeof(str),in); 
        
    str[strcspn(str, "\n")] = '\0';
   
    fclose(in);

    int x = 0;
    int len = strlen(str);
    while (x < len - 1) {
        if (str[x] == str[len - 1]) { 
            fprintf(out, "%d ", x); 
        }
        x++;
    }
    fclose(out);
    return 0;
}