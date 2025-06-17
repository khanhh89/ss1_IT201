#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 3, 6, 7, 3, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;  //O(1)
    printf("Mang ban dau: ");
    for (int i =0; i< size; i++) { //O(n)
        printf("%d", arr[i]);
    }
    printf("\n");
    int result = count(arr, size, x);
        printf("So lan xuat hien cua phan tu %d la: %d\n", x , result);
        return 0;

}

int count(int arr[], int size, int taget) {
    int count = 0;
    for (int i = 0; i< size; i++) {
        if (arr[i] == taget) {
            count++;
        }
    }
    return count;
}