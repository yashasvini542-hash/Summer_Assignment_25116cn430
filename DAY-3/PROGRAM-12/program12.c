#include<stdio.h>
int main(){
    int num1,num2,max;
    //Ask the user to input 2 numbers
     printf("Enter 2 number:");
     scanf("%d %d",&num1,&num2);
     if(num1>num2)
     {
        max=num1;
     }
     else{
        max=num2;
     }
     while(1){
        if(max%num1==0 && max%num2==0){
            printf("THE LCM OF GIVEN NUMBERS IS %d",max);
            break;
        }
        ++max;
     }
     return 0;
}