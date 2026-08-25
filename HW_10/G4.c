#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    
    char word1[101], word2[101];
    fscanf(in, "%s %s", word1, word2);
    fclose(in);
    
    int count1[26] = {0}; 
    int count2[26] = {0}; 
    
    for (int i = 0; word1[i] != '\0'; i++) {
        count1[word1[i] - 'a']++;
    }
    for (int i = 0; word2[i] != '\0'; i++) {
        count2[word2[i] - 'a']++;
    }
    int first = 1; 
    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            if (!first) {
                fprintf(out, " ");
            }
            fprintf(out, "%c", 'a' + i);
            first = 0;
        }
    }
    fclose(out);
    return 0;
}