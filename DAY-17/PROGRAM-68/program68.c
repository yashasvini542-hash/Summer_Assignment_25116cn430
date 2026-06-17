#include <stdio.h>
int main() {
    int n1,n2,i,j,k=0,found;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter elements: ");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter elements: ");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    int common[n1];
    for(i=0;i<n1;i++) {

        for(j=0;j<n2;j++) {

            if(a[i]==b[j]) {

                found=0;

                for(int x=0;x<k;x++) {
                    if(common[x]==a[i]) {
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    common[k++]=a[i];

                break;
            }
        }
    }

    printf("Common elements: ");
    for(i=0;i<k;i++)
        printf("%d ",common[i]);
    return 0;
}