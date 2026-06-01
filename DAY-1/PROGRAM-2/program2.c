#include<stdio.h>
int main()
{
    int n,i;
    //Ask the user to input a number
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Multiplication Table of the given number:\n",n);
    //Run loop to print table of the number from 1 to 10
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}