#include <stdio.h>
int main() {
    int n, i, j, target, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter target sum: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {
                printf("Pair: %d %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(!found)
        printf("No pair found");
    return 0;
}