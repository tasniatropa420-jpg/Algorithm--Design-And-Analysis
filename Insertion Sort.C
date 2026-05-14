#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int data[] = {12, 11, 13, 5, 6};
    int size = sizeof(data) / sizeof(data[0]);

    insertionSort(data, size);

    printf("Sorted array: 5");
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}