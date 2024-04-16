#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int areCoprime(int a, int b) {
    return gcd(a, b) == 1 ? 1 : 0;
}

int storeCoprime(int arr1[], int arr2[], int n, int coprimePairs[][2]) {
    int numPairs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (areCoprime(arr1[i], arr2[j]) == 1) {
                coprimePairs[numPairs][0] = arr1[i];
                coprimePairs[numPairs][1] = arr2[j];
                numPairs++;
            }
        }
    }
    return numPairs;
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

    int coprimePairs[n*n][2];
    int numPairs = storeCoprime(arr1, arr2, n, coprimePairs);

    printf("Number of coprime pairs: %d\n", numPairs);
    for (int i = 0; i < numPairs; i++) {
        printf("(%d, %d)\n", coprimePairs[i][0], coprimePairs[i][1]);
    }

    return 0;
}