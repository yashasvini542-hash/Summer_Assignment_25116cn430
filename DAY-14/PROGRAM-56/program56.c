#include <stdio.h>
int main() {
    int n;
    printf("Enter number of array elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Duplicate elements: ");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}