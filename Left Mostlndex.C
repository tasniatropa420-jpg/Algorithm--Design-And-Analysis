#include <stdio.h>

int main() {
    int n, i, key;

        // Input array size
            printf("Enter number of elements: ");
                scanf("%d", &n);

                    int arr[n];

                        // Input array elements
                            printf("Enter %d elements:\n", n);
                                for(i = 0; i < n; i++) {
                                        scanf("%d", &arr[i]);
                                            }

                                                // Input the value to search
                                                    printf("Enter value to search: ");
                                                        scanf("%d", &key);

                                                            int leftMostIndex = -1;  
                                                                // Initialize with -1 (means not found)

                                                                    // Loop through the array
                                                                        for(i = 0; i < n; i++) {
                                                                                if(arr[i] == key) {
                                                                                            leftMostIndex = i;  
                                                                                                        // Store index when key is found
                                                                                                                    break;  
                                                                                                                                // Stop loop immediately (because first occurrence found)
                                                                                                                                        }
                                                                                                                                            }

                                                                                                                                                // Output result
                                                                                                                                                    if(leftMostIndex != -1) {
                                                                                                                                                            printf("Left Most Index of %d is: %d\n", key, leftMostIndex);
                                                                                                                                                                } else {
                                                                                                                                                                        printf("Value not found in array.\n");
                                                                                                                                                                            }

                                                                                                                                                                                return 0;
                                                                                                                                                                                }