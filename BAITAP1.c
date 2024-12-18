#include <stdio.h>

int main() {

    int array[] = {10, 20, 30, 40, 50};
    
    int length = sizeof(array) / sizeof(array[0]);
    
    printf("Các phần tử trong mảng:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }
    printf("Độ dài của mảng: %d\n", length);

    return 0;
}
