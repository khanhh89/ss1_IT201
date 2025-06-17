#include <stdio.h>

int main() {
    int arr[] = {100, 64, 78, 1, 5, 90, 200};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mảng trước khi sắp xếp:\n");
    print(arr, n);
    sort(arr, n);
    printf("Mảng sau khi sắp xếp:\n");
    print(arr, n);
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n) {
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
}

