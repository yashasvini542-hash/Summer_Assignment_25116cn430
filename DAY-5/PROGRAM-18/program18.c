#include <stdio.h>
int main() {
    int n, temp, rem, sum = 0, fact, i;
    //Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum=sum+fact;  --
        temp=temp/10;
    }
    if (sum == n)
        printf("Entered number is a strong number.",n);
        else
        printf("Entered number is not a Strong Number.", n);
    return 0;
}
