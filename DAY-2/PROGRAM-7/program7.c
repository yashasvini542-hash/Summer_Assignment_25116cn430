#include<stdio.h>
int main(){
    int n,lastdigit,product=1;
    //Ask the user to input a number
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        lastdigit=n%10; //To find the last digit of the number
        product=product*lastdigit; //To find product of the digits
        n=n/10; //To remove the last digit of the number
    }
    printf("The product of the digits of the given number is:%d",product);
    return 0;
    
}