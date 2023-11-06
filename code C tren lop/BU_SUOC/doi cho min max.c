#include <stdio.h>

void swap_min_max(int arr[], int size) {
    int i;
	if (size <= 1) {
        return;
    }

    int max_index = 0;
    int min_index = 0;

    for (i = 1; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    if (max_index != min_index) {
        int temp = arr[max_index];
        arr[max_index] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
	int i;
    int array[] = {0, 3, 4, 2, 1, 7};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    swap_min_max(array, size);

    printf("Modified array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

