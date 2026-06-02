#include<stdio.h>
int main()
{
    int n,digit,temp,sum=0;
    // Ask the user to input a number
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;//Storing orignal value into another variable
    //Use loop to find sum of digits of a number
    while(temp>0){
    digit=temp%10;//To get last digit of the number
    sum=sum+digit;//Adding sum and the last digit
    temp=temp/10;//Removing the last digit
    }
    printf("The sum of digits of a number is:%d",sum);
    return 0;


}