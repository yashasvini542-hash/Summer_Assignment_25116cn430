#include<stdio.h>
int main()
{
    int n,count=0;
    //Ask the user to input a number
    printf("Enter a number:");
    scanf("%d",&n);
    //Use loop to count the number of digits in a number
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    printf("THE NUMBER OF DIGITS IN THE GIVEN NUMBER ARE:%d",count);
    return 0;
}