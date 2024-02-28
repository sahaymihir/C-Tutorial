#include <stdio.h>

int main() {
    int arr[100], n, num, found = 0, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to delete: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            pos = i;
            break;
        }
    }
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Resultant array:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    return 0;
    }

