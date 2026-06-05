#include <stdio.h>
int main() {
    int n, i;
    //Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of entered number are: ", n);
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}