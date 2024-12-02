#include <stdio.h>

int nhapmang(int arr[][100], int n, int m) {
    printf("Nhap kich co cua mang: ");
    scanf("%d %d", n, m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Nhap phan tu cua mang: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    return 0;
}

int hienthimang(int arr[][100], int n, int m) {
    printf("Mang hien tai:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}

int levatinhtong(int arr[][100], int n, int m) {
    int tong = 0;
    printf("Cac phan tu le: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] % 2 != 0) {
                printf("%d ", arr[i][j]);
                tong += arr[i][j];
            }
        }
    }
    printf("Tong cac phan tu le: %d\n", tong);
    return 0;
}

int bienvatich(int arr[][100], int n, int m) {
    int tich = 1;
    printf("Cac phan tu tren duong bien: ");
    for(int i = 0; i<n; i++) {
        for(int j = 0; j< m; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == m-1) {
                printf("%d ", arr[i][j]);
                tich *= arr[i][j];
            }
        }
    }
    printf("\nTich cac phan tu tren duong bien: %d\n", tich);
    return 0;
}

int cheochinh(int arr[][100], int n, int m) {
    printf("Cac phan tu tren duong cheo chinh: ");
    for(int i = 0; i <n && i<m; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    return 0;
}

int cheophu(int arr[][100], int n, int m) {
    printf("Cac phan tu tren duong cheo phu: ");
    for(int i = 0;i < n && i < m; i++) {
        printf("%d ", arr[i][m-i-1]);
    }
    printf("\n");
    return 0;
}



int main() {
    int arr[100][100];
    int n = 0, m = 0;
    int choice;

    do {
        printf("nemu\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                nhapmang(arr, &n, &m);
                break;
            case 2:
                hienthimang(arr, n, m);
                break;
            case 3:
                levatinhtong(arr, n, m);
                break;
            case 4:
                bienvatich(arr, n, m);
                break;
            case 5:
                cheochinh(arr, n, m);
                break;
            case 6:
                cheophu(arr, n, m);
                break;
            case 7:
                
                break;
            case 8:
                printf("Thoat chuong trinh");
                break;
            default:
                printf("KHong hop le");
        }
    } while(choice != 8);





    return 0;
}

