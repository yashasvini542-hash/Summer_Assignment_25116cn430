#include<stdio.h>
int main()
{
    int n,rev=0,org,lastdigit;
    //Ask the user to input a number
    printf("Enter a number:");
    scanf("%d",&n);
    org=n;//Store the entered number into a variable org
    while(n>0)
    {
        lastdigit=n%10;//To get the last digit of the number
        rev=rev*10+lastdigit;//To find reverse of the number
        n=n/10;//To remove the last digit of the number
    }
    if(org==rev)//To check if the orignal number is equal to the reverse of the number
    {
        printf("The given number is palindrome number.");
    }
    else
    {
        printf("The given number is not a palindrome number.");
    }
    return 0;
}