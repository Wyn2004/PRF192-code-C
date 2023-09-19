#include <stdio.h>

void sortArray(int *arr, int size) {
    int *temp;
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = arr + i;
                arr + i = arr + j;
                arr + j = temp;
            }
        }
    }
}

void printArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 7, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep: ");
    printArray(arr, size);

    sortArray(arr, size);

    printf("Mang sau khi sap xep: ");
    printArray(arr, size);

    return 0;
}