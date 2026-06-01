#include<stdio.h>
int main()
{
    int n,i,sum=0;
    //Ask the user to enter a natural number
    printf("Enter a natural number:");
    scanf("%d",&n);
    //Calculate sum using for loop
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    //Print the output
    printf("The sum of first n natural numbers is:%d\n",sum);
    return 0;
}