#include <stdio.h>
int main() {
    int n, i, j, largest = 0, prime;
    //Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++) {
        if(n % i == 0) {
            prime = 1;
            for(j = 2; j < i; j++)
             {
                if(i % j == 0) {
                    prime = 0;
                    break;
                }
            }
            if(prime)
                largest = i;
        }
    }
    printf("Largest Prime Factor = %d", largest);
    return 0;
}