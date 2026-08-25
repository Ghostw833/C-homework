#include <stdio.h>
#include <string.h>
int main () { 
    FILE *f;
    char string[150];
    f = fopen("input.txt", "r");
    while (fgets(string, sizeof(string), f)!=NULL) {
        
    }
    string[strcspn(string, "\n")] = '\0';
    fclose(f);

    f = fopen("output.txt", "w");

    int len = strlen(string);
    
    fprintf(f,"%s, %s, %s %d",string,string,string,len);
    fclose(f);
    return 0;
}

