#include<stdio.h>
int main(){
    int n,i,m,count=0;
    //Ask the user to input a number
    printf("Enter a number:");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=n/2;i++)//Check divisibilty from 2 to n/2
    {
        if(n%i==0){
            printf("The number entered is not a prime number.");
            count=1;
            break;
        }
    }
    if(count==0){
        printf("The entered number is a prime number.");
    }
    return 0;
}