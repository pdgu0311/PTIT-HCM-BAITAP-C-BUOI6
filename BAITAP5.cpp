#include <stdio.h>

int main() {
    int arr[5]; 
    int i, max, min;

    printf("Nhap 5 phan tu cua mang:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);

    return 0;
}

