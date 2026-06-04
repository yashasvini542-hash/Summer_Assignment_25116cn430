#include <stdio.h>
int main()
{
    int n, i;
    int a = 0, b = 1, c;
    //Ask the user to input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("FIBONACCI SERIES: ");
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}