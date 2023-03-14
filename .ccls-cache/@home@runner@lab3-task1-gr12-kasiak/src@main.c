#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {
    srand(time(NULL));

    int n;
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1) {
    printf("Error reading input.\n");
    return 1;
    }

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    printf("Array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}