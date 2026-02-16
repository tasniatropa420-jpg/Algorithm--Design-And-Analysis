#include <stdio.h>

int main() {
    int arr[100], n, i, key;
        int found = 0;   // Flag variable to check if element is found or not

            // Input size of array
                printf("Enter number of elements:50 ");
                    scanf("%d", &n);

                        // Input array elements
                            printf("Enter %d elements:\n", n);
                                for(i = 0; i < n; i++) {
                                        scanf("%d", &arr[i]);
                                            }

                                                // Input the element to search
                                                    printf("Enter the element to search: ");
                                                        scanf("%d", &key);

                                                            // Linear Search Logic
                                                                for(i = 0; i < n; i++) {
                                                                        if(arr[i] == key) {
                                                                                    found = 1;   // Element found
                                                                                                printf("Element found at position %d\n", i + 1);
                                                                                                            break;       // Stop searching after finding
                                                                                                                    }
                                                                                                                        }

                                                                                                                            // If element not found
                                                                                                                                if(found == 0) {
                                                                                                                                        printf("Element not found\n");
                                                                                                                                            }

                                                                                                                                                return 0;   // Program ends successfully
                                                                                                                                                }