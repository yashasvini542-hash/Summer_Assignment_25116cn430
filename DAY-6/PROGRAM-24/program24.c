#include <stdio.h>
int main() {
    int x, n, result = 1, i;
    //Ask the user to enter base and power
    printf("Enter base and power: ");
    scanf("%d%d", &x, &n);
    for (i = 1; i <= n; i++) {
        result = result * x;
    }
    printf("%d^%d = %d", x, n, result);
    return 0;
}