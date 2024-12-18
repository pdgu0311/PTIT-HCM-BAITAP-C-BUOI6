#include <stdio.h>

int main() {
    int array[5] = {1, 3, 5, 7, 9}; 
    int hasEven = 0; 
    printf("Các số chẵn trong mảng là:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            hasEven = 1; 
        }
    }

    if (!hasEven) {
        printf("Mảng không chứa số chẵn.\n");
    }

    return 0;
}
