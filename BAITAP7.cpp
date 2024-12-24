#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d] (phai la so le): ", i);
        scanf("%d", &arr[i]);

        while (arr[i] % 2 == 0) {
            printf("Phan tu khong hop le. Vui long nhap lai arr[%d] (phai la so le): ", i);
            scanf("%d", &arr[i]);
        }
    }

    printf("Mang so le da nhap: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

