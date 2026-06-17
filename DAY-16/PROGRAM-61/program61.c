#include <stdio.h>
int main() {
    int n, i, sum = 0, total;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter %d elements: ", n-1);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];////to print the sum of the array in ascending order and desending order in order to get the sum of the matrix a and b as well as the four members of the matrix b 
    }
    total = n * (n + 1) / 2; 
    printf("Missing number = %d", total - sum);
    return 0;
}