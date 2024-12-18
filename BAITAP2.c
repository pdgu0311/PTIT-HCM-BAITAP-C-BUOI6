#include <stdio.h>

int main() {
    int array[5];

    printf("Nhập 5 số nguyên cho mảng:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nCác phần tử trong mảng là:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
