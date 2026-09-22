
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main(void) {
	int n;
	printf("Enter number of elements: ");
	if (scanf("%d", &n) != 1 || n <= 0) {
		fprintf(stderr, "Invalid size\n");
		return 1;
	}
	int *arr = malloc(n * sizeof(int));
    if (!arr) return 2;