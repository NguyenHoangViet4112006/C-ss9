#include <stdio.h>




int nhapmang(int arr[], int n) {
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return n;
}


int hienthimang(int arr[], int n) {
    printf("Mang hien tai: ");
    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

int themphantu(int arr[], int n) {
    int vitri, giatri;
    printf("Nhap vi tri them: ");
    scanf("%d", &vitri);
    printf("Nhap gia tri them: ");
    scanf("%d", &giatri);
    for(int i = n; i >vitri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[vitri]=giatri;
    n++;
    return n;
}

int suaphantu(int arr[], int n) {
    int vitri, giatri;
    printf("Nhap vi tri sua: ");
    scanf("%d", &vitri);
    printf("Nhap gia tri moi: ");
    scanf("%d", &giatri);
    arr[vitri]= giatri;
    return 0;
}

int xoaphantu(int arr[], int n) {
    int vitri;
    printf("Nhap vi tri xoa: ");
    scanf("%d", &vitri);
    for(int i = vitri; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    return n;
}



int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        printf("menu\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                n = nhapmang(arr, n);
                break;
            case 2:
                hienthimang(arr, n);
                break;
            case 3:
                n = themphantu(arr, n);
                break;
            case 4:
                suaphantu(arr, n);
                break;
            case 5:
                n = xoaphantu(arr, n);
                break;
            case 6:
                printf("Thoat chuong trinh");
                break;
            default:
                printf("khong hop le");
        }
    } while(choice != 6);
    
    
    
    
    
    

    return 0;
}

