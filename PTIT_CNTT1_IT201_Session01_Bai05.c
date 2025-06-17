#include <stdio.h>

void swap(int *a, int *b) { // đổi chỗ
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n) {
    int i, j;
    int swap;
    for (int i = 0; i<n-1 ; i++) {
        swap = 0;
        for (int j; j <n-i-1; j++) {  //o(n^2)
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swap = 1;
            }
        }
        if (swap = 0) {
            break;
        }
    }
}

void print( int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\n");
    }
}
int main() {
    int arr[] = {100, 64, 78,1 , 5, 90, 200};  //o(1)
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang truong khi sap xep: \n");
    print(arr, n);
    sort(arr, n);
    print("Mang sau khi sap xep: \n");
    print(arr, n);
}


