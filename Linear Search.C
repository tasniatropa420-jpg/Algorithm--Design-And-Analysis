#include <stdio.h>

int linearSearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int data[] = {12, 45, 7, 93, 22, 56};
    int target = 93;
    int size = sizeof(data) / sizeof(data[0]);
    
    int result = linearSearch(data, size, target);
    
    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}