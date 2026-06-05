#include <stdio.h>
int main()
 {
    int n, i, sum = 0;
    //Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            sum=sum+i;
        }
    }
    if(sum == n)
        printf("Entered number is a Perfect Number.", n);
    else
        printf("Entered number is not a Perfect Number.", n);
    return 0;
}