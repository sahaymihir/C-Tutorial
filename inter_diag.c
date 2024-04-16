#include <stdio.h>
#define MAX_SIZE 100

// Function to interchange the primary and secondary diagonals of a matrix
void interchangeDiagonals(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][size - 1 - i];
        matrix[i][size - 1 - i] = temp;
    }
}

int main() {
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    interchangeDiagonals(matrix, size);

    printf("Modified Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}