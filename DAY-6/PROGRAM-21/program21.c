#include <stdio.h>
int main() {
    int n, temp = 0, place = 1, rem;
    //Ask the user to input a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        rem = n % 2;
        temp = temp + rem * place;
        place = place * 10;
        n = n / 2;
    }
    printf("Binary = %d", temp);
    return 0;
}