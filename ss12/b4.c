#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int array[] = {3, 7, 2, 8, 5, 10, 1};
    int size = sizeof(array) / sizeof(array[0]); 

    int largestNumber = findMax(array, size);

    printf("so lon nhat %d\n", largestNumber);

    return 0;
}

