#include <stdio.h>

void insertElement(int arr[], int *size, int element, int pos) {
    int index = pos - 1;

    for (int i = *size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    (*size)++;
}

int main() {
    int arr[100] = {20, 30, 40, 50};
    int size = 4;
    int element = 25;
    int pos = 2;

    printf("Original: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);

    insertElement(arr, &size, element, pos);

    printf("\nAfter Insertion: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}