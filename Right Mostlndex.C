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

                                                                int rightMostIndex = -1;  
                                                                    // Initialize with -1 (means not found)

                                                                        // Loop through the array
                                                                            for(i = 0; i < n; i++) {
                                                                                    if(arr[i] == key) {
                                                                                                rightMostIndex = i;  
                                                                                                            // Update index every time key is found
                                                                                                                    }
                                                                                                                        }

                                                                                                                            // Output result
                                                                                                                                if(rightMostIndex != -1) {
                                                                                                                                        printf("Right Most Index of %d is: %d\n", key, rightMostIndex);
                                                                                                                                            } else {
                                                                                                                                                    printf("Value not found in array.\n");
                                                                                                                                                        }

                                                                                                                                                            return 0;
                                                                                                                                                            }#include <stdio.h>

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

                                                                                                                                                                                                                            int rightMostIndex = -1;  
                                                                                                                                                                                                                                // Initialize with -1 (means not found)

                                                                                                                                                                                                                                    // Loop through the array
                                                                                                                                                                                                                                        for(i = 0; i < n; i++) {
                                                                                                                                                                                                                                                if(arr[i] == key) {
                                                                                                                                                                                                                                                            rightMostIndex = i;  
                                                                                                                                                                                                                                                                        // Update index every time key is found
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                        // Output result
                                                                                                                                                                                                                                                                                            if(rightMostIndex != -1) {
                                                                                                                                                                                                                                                                                                    printf("Right Most Index of %d is: %d\n", key, rightMostIndex);
                                                                                                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                                                                                                                printf("Value not found in array.\n");
                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                                                                                                                        }