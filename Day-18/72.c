#include <stdio.h>
#include <stdbool.h>

void sortDescending(int arr[], int n) {
    int i, j, temp;
    bool swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = false;

        for (j = 0; j < n - i - 1; j++) {
            // Change '<' to '>' if you want ascending order instead
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = true; 
            }
        }

        // If no elements were swapped, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {15, 3, 89, 42, 7, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    sortDescending(arr, n);

    printf("Sorted array in descending order: \n");
    printArray(arr, n);
    
    return 0;
}