#include <stdio.h>

int main() {
    int arr[100];
    int n, index;

    printf("nhap so luong phan tu ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("nhap vi tri can xoa ");
    scanf("%d", &index);

    if(index < 0 || index >= n) {
        printf("khong hop le");
    } else {
        for(int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }



    return 0;
}

