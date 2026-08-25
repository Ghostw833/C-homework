#include <stdio.h>
#include <string.h>

int main () {
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","w");
    char str[1001];
    fgets(str,sizeof(str),in); 
        
    str[strcspn(str, "\n")] = '\0';
   
    fclose(in);

    int a = 'a';
    int b = 'b';
    int x = 0;
    while (x < strlen(str)) {
        if (str[x] == 'a') { 
            str[x] = 'b';
            fprintf(out, "%c", str[x]); 
        }
        else if (str[x] == 'b') { 
            str[x] = 'a';
            fprintf(out, "%c", str[x]);
        }
        else if (str[x] == 'A') {
            str[x] = 'B';
            fprintf(out, "%c", str[x]);
        }
        else if (str[x] == 'B') {
            str[x] = 'A';
            fprintf(out, "%c", str[x]);
        }
        else {
            fprintf(out, "%c", str[x]);
        }
        x++;
    }
    fclose(out);
    return 0;
}