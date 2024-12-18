#include <stdio.h>

int main() {
    int n;

    printf("Nhập số phần tử của mảng (tối đa 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Số phần tử không hợp lệ!\n");
        return 1;
    }

    int array[100];

    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nCác phần tử trong mảng là:\n");
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}

