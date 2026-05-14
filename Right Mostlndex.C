#include <stdio.h>

int findRightmostIndex(int array[], int size, int target) {
    // Loop starts from the end of the array and goes backwards
    for (int i = size - 1; i >= 0; i--) {
        if (array[i] == target) {
            return i; // Returns the first match from the right side
        }
    }
    return -1; 
}

int main() {
    int arr[] = {12, 93, 7, 93, 22, 93, 56}; 
    int key = 93;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int index = findRightmostIndex(arr, n, key);
    
    if (index != -1) {
        printf("Rightmost index of %d is: %d\n", key, index);
    } else {
        printf("Element %d not found.\n", key);
    }
    
    return 0;
}