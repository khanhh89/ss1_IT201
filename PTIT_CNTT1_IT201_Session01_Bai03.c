#include<stdio.h>

int main() {
    int n = 4;
    int*a = mallocArray(n);
    for (int i =0; i<n; i++) {
        printf("%d\n", a[i]);
    }
}

int* mallocArray(int n) {
    int* arr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i<n; i++) {
        arr[i] = i;
    } //O(n)
    return arr;
}
