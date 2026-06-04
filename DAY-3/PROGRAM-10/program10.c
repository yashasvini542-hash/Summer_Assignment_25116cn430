#include<stdio.h>
int main(){
    int a,b,i,j,count;
    //Ask the user to input starting number and ending number
    printf("Enter starting number and ending number: ");
    scanf("%d %d",&a,&b);
    printf("PRIME NUMBERS LYING IN THE RANGE ARE:\n");
    //Use loop to check the numbers lying in the range
    for(i=a;i<=b;i++){
        count=0;
        if(i<=1)
        continue;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%d ",i);
        }
    }
    return 0;
} 