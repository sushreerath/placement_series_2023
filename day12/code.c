5.write algorithm of Bubble sort . (Refer any documentation) If you already know the algorithm, solve one problem from GeeksforGeeks or LeetCode about sorting

#include <stdio.h>

int main() {
    int n, z = 0, y = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], x = 1;

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Inserted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    while (x < n) {
        int c = 0;
        for (int i = 0; i < n - x; i++) {
            y++;
            if (arr[i] > arr[i + 1]) {
                c = 1;
                z++;
                // Swap elements directly
                arr[i] = arr[i] + arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
            }
        }
        printf("\nPass[%d]: ", x);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        if (c == 0) {
            break;
        }
        x++;
    }
    printf("\nTotal number of comparisons: %d", y);
    printf("\nTotal number of swaps: %d");

    printf("\nSorted array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
