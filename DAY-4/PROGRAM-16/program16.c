#include <stdio.h>
int main()
{
    int start, end, i, temp, rem, sum;
    //Ask the user to enter starting and ending number
    printf("Enter starting and ending number: ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers in the range are:\n");

    for(i = start; i <= end; i++)
    {
        temp = i;
        sum = 0;
        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if(sum == i)
            printf("%d ", i);
    }
    return 0;
}