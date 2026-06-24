#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int maxFreq = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n') {
            freq[(int)str[i]]++;

            if(freq[(int)str[i]] > maxFreq) {
                maxFreq = freq[(int)str[i]];
                maxChar = str[i];
            }
        }
    }
    printf("Maximum occurring character: %c", maxChar);
    printf("\nFrequency: %d", maxFreq);
    return 0;
}