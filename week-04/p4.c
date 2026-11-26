#include <stdio.h>
#include <string.h>
int main() {
    char word[100], ch;
    int count = 0;
    scanf("%99s", word);
    scanf(" %c", &ch);
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == ch) {
            count++;
        }
    }
  printf("%d\n", count);
    return 0;
}
