#include <stdio.h>



int nhapmang(int arr[], int n) {
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for(int i = 0; i<n; i++) {
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

int chantinhtong(int arr[], int n) {
    int tong = 0;
    printf("Cac phan tu chan: ");
    for(int i = 0; i <n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("Tong cac phan tu chan: %d\n", tong);
    return 0;
}

int maxmin(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    return 0;
}

int songuyento(int n) {
    if (n < 2) return 0;
    for (int i = 2; i<=n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int tongsonguyento(int arr[], int n) {
    int tong = 0;
    printf("Cac phan tu la so nguyen to: ");
    for(int i = 0; i < n; i++) {
        if(songuyento(arr[i])) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("Tong cac phan tu la so nguyen to: %d\n", tong);
    return 0;
}

int thongkephantu;


int themphantu(int arr[], int n) {
    int vitri, giatri;
    printf("Nhap vi tri them: ");
    scanf("%d", &vitri);
    printf("Nhap gia tri them: ");
    scanf("%d", &giatri);
    for(int i = n; i >vitri; i--) {
        arr[i] = arr[i-1];
    }
    arr[vitri]=giatri;
    n++;
    return n;
}

int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        printf("menu\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
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
                chantinhtong(arr, n);
                break;
            case 4:
                maxmin(arr, n);
                break;
            case 5:
                tongsonguyento(arr, n);
                break;
            case 6:
                
                break;
            case 7:
                n = themphantu(arr, n);
                break;
            case 8:
                printf("Thoat chuong trinh");
                break;
            default:
                printf("Khong hop le thu lai");
        }
    } while(choice != 8);





    return 0;
}

