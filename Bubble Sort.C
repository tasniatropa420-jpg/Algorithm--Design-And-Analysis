#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;

        // Outer loop for number of passes
            for (i = 0; i < n - 1; i++) {

                    // Inner loop for comparing adjacent elements
                            for (j = 0; j < n - i - 1; j++) {

                                        // If current element is greater than next element, swap them
                                                    if (arr[j] > arr[j + 1]) {

                                                                    temp = arr[j];          // Store current element in temp
                                                                                    arr[j] = arr[j + 1];    // Move next element to current position
                                                                                                    arr[j + 1] = temp;      // Move temp to next position
                                                                                                                }
                                                                                                                        }
                                                                                                                            }
                                                                                                                            }

                                                                                                                            int main() {
                                                                                                                                int arr[] = {5, 2, 9, 1, 3};
                                                                                                                                    int n = sizeof(arr) / sizeof(arr[0]);
                                                                                                                                        int i;

                                                                                                                                            bubbleSort(arr, n);   // Call sorting function

                                                                                                                                                printf("Sorted array: ");
                                                                                                                                                    for (i = 0; i < n; i++) {
                                                                                                                                                            printf("%d ", arr[i]);  // Print sorted array
                                                                                                                                                                }

                                                                                                                                                                    return 0;
                                                                                                                                                                    }