#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printDouble(n);
return 0;
}

void printDouble(int n){
    int i = 1;      //O(1)
    while(i<=n) {
        printf("%d\n",i);
        i*=2; //O(n)
    }
}
//O(n)