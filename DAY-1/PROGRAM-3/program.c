#include<stdio.h>
int main()
{
    int n,i,fact=1;
    // Ask the user to input a number
    printf("Enter a number:");
    scanf("%d",&n);
    // Check whether the number is less than 0 or not
    if(n<0){
        printf("FACTORIAL OF THE GIVEN NUMBER IS NOT POSSIBLE.");
    }
        else{
            for(i=1;i<=n;i++){
                fact=fact*i;

            }
             printf("FACTORIAL OF THE GIVEN NUMBER IS:%d",fact);
            
        }
       
    return 0;
}