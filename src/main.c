#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int compare_integers(const void* a, const void* b) {
    int sum_a = sum_of_digits(*(int*)a);
    int sum_b = sum_of_digits(*(int*)b);
    if (sum_a < sum_b) {
        return -1;
    } else if (sum_a > sum_b) {
        return 1;
    } else {
        return 0;
    }
}

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
  qsort(arr, n, sizeof(int), compare_integers);
    
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}