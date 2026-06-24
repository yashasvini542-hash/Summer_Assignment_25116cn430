#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char longest[100];
    char current[100];
    int i = 0, j = 0;
    int max = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            current[j++] = str[i];
        } else {
            current[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(longest, current);
            }

            j = 0;
            if (str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }
    printf("Longest word: %s", longest);
    return 0;
}