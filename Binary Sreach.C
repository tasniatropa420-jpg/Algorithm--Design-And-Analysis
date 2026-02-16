#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};  // Sorted array (must be sorted)
        int n = 7;       // Size of array
            int key;         // Value to search
                int low = 0;
                    int high = n - 1;
                        int mid;
                            int found = 0;   // Flag variable

                                printf("Enter value to search: ");
                                    scanf("%d", &key);

                                        // Binary Search Loop
                                            while (low <= high) {

                                                    // Find middle index
                                                            mid = (low + high) / 2;

                                                                    if (arr[mid] == key) {
                                                                                printf("Element found at index %d\n", mid);
                                                                                            found = 1;
                                                                                                        break;
                                                                                                                }
                                                                                                                        else if (arr[mid] < key) {
                                                                                                                                    // Search in right half
                                                                                                                                                low = mid + 1;
                                                                                                                                                        }
                                                                                                                                                                else {
                                                                                                                                                                            // Search in left half
                                                                                                                                                                                        high = mid - 1;
                                                                                                                                                                                                }
                                                                                                                                                                                                    }

                                                                                                                                                                                                        if (!found) {
                                                                                                                                                                                                                printf("Element not found\n");
                                                                                                                                                                                                                    }

                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                        }