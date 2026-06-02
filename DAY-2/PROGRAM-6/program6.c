#include<stdio.h>
int main(){
    int n,rev=0,lastdigit;
    //Ask the user to input a number
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
    lastdigit=n%10;//To get the last digit of the number
    rev=rev*10+lastdigit;//To find reverse of the number
    n=n/10;//To remove the last digit of the number
   }

    printf("The reverse of the given number is:%d",rev);
    return 0;

}