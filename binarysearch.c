#include <stdio.h>
int binary_search(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;  
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;  
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the number to search for: ");
    scanf("%d", &target);
    int result = binary_search(arr, n, target);
    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);
    return 0;
}