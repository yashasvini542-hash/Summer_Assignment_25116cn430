#include <stdio.h>
int armstrong(int n)
{
    int sum = 0, temp = n, rem;

    while(temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return (sum == n);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(armstrong(num))
        printf("Armstrong Number");
    else
        printf("It is not an Armstrong Number");

    return 0;
}