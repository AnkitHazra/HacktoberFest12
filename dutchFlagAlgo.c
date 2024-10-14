#include <stdio.h>

void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                // Swap arr[low] and arr[mid]
                arr[low] ^= arr[mid];
                arr[mid] ^= arr[low];
                arr[low] ^= arr[mid];
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                // Swap arr[mid] and arr[high]
                arr[high] ^= arr[mid];
                arr[mid] ^= arr[high];
                arr[high] ^= arr[mid];
                high--;
                break;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements (0, 1, 2 only):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort012(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
