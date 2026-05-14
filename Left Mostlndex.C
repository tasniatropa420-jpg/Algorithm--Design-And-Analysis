#include <stdio.h>

// Function to find the leftmost index of a target element
int findLeftmostIndex(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i; // Returns the very first occurrence
        }
    }
    return -1; // Target not found
}

int main() {
    // Array with duplicate elements (93 appears twice)
    int data[] = {12, 93, 7, 93, 22, 56}; 
    int target = 93;
    int size = sizeof(data) / sizeof(data[0]);
    
    int result = findLeftmostIndex(data, size, target);
    
    if (result != -1) {
        printf("Leftmost index of %d is: %d\n", target, result);
    } else {
        printf("Element %d not found.\n", target);
    }
    
    return 0;
}