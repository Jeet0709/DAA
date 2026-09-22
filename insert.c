
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();

   
 

    
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
	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			fprintf(stderr, "Invalid input\n");
			free(arr);
			return 3;
		}
	}

	insertion_sort(arr, n);

	printf("Sorted array:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
	return 0;
	
	end = clock();

    cpu_time_used = ((double)(end - start)) 

    printf("Runtime: %f seconds\n", cpu_time_used);

}
    }
    
   

   
    