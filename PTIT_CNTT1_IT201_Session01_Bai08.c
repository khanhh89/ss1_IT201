#include <stdio.h>

// 2 vong lap long nhau O(n^2)

int findFrequent(int arr[], int n) {
    if (n <= 0) {
        return -1; 
    }
    
    int max = 0;
    int frequent = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            frequent = arr[i];
        }
    }
    return frequent;
}

int main() {
    int arr[] = {1, 2, 2, 4, 3, 2, 7, 3, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int result = findFrequent(arr, n);
    if (result == -1) {
        printf("Mang rong!\n");
    } else {
        printf("Phan tu xuat hien nhieu nhat la: %d\n", result);
    }
    return 0;
}


