#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int words = 0;
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\n')
            words++;
    }
    if (strlen(s) > 1)
        words++; 
    printf("Words = %d\n", words);
    return 0;
}