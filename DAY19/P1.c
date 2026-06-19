#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[ROWS][COLS], const char *name) {
    printf("Enter elements of Matrix %s (%dx%d):\n", name, ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++) {
            printf("  [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
}

void addMatrices(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            result[i][j] = A[i][j] + B[i][j];
}

void printMatrix(int matrix[ROWS][COLS], const char *name) {
    printf("\nMatrix %s:\n", name);
    for (int i = 0; i < ROWS; i++) {
        printf("  ");
        for (int j = 0; j < COLS; j++)
            printf("%4d", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int A[ROWS][COLS], B[ROWS][COLS], result[ROWS][COLS];

    printf("=== Matrix Addition (%dx%d) ===\n\n", ROWS, COLS);

    inputMatrix(A, "A");
    printf("\n");
    inputMatrix(B, "B");

    addMatrices(A, B, result);

    printMatrix(A, "A");
    printMatrix(B, "B");
    printMatrix(result, "A + B");

    return 0;
}