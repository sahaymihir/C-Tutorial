#include<stdio.h>
#include<math.h>

#include <stdio.h>

int areCoprime(int a, int b) {
    int min = a < b ? a : b;
    for (int i = min; i > 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return 1;
        }
    }
    return 0;
}

void storeCoprime(int arr1[], int arr2[], int n, int coprimePairs[][2], int *numPairs) {
    *numPairs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (areCoprime(arr1[i], arr2[j]) == 0) {
                coprimePairs[*numPairs][0] = arr1[i];
                coprimePairs[*numPairs][1] = arr2[j];
                (*numPairs)++;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int coprimePairs[n*n][2], numPairs;
    storeCoprime(arr1, arr2, n, coprimePairs, &numPairs);

    printf("Number of coprime pairs: %d\n", numPairs);
    for (int i = 0; i < numPairs; i++) {
        printf("(%d, %d)\n", coprimePairs[i][0], coprimePairs[i][1]);
    }

    return 0;
}
