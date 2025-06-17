#include <stdio.h>

//C1: duyet 2 lan O(n^2)
//C2:Mang danh dau O(n)
//Khong gian: ca hai deu O(1)

int main(){
    int arr[] = {1, 2, 3, 4, 3, 6, 7, 3, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    for (int i =0; i< n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    if(bruteForce(arr, n)) {
        printf("Mang co phan tu trung lap\n");
    }else{
        printf("mang khong co phan tu trung lap\n)");
    }

    if(flag(arr, n)) {
        printf("Mang co phan tu trung lap\n");
    }else{
        printf("mang khong co phan tu trung lap\n)");
    }
    return 0;
}

//C1:
int bruteForce(int arr[], int n){
    for (int i = 0; i < n-1 ; i++) {
        for(int j = i+1; j<n; j++){
            if(arr[i] >arr[j]){
                return 1;  //tim thay
            }
        }
    }
return 0;
}

//C2:
int flag(int arr[], int n){
    for (int i = 0; i < n ; i++) {
        if(flag[arr[i]] ==1){
        return 1;
        }
        flag[arr[i]] = 1; // da thay
    }
return 0;
}
