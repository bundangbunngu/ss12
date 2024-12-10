#include <stdio.h>

void inMang(int arr[], int kichThuoc) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    inMang(arr, size);
    return 0;
}

