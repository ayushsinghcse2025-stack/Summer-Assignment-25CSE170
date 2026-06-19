#include <stdio.h>

#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int n;
    int primarySum = 0, secondarySum = 0;

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        primarySum   += matrix[i][i];           // Top-left to bottom-right
        secondarySum += matrix[i][n - 1 - i];  // Top-right to bottom-left
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d", matrix[i][j]);
        printf("\n");
    }

    printf("\nPrimary Diagonal   (\\): %d\n", primarySum);
    printf("Secondary Diagonal (/): %d\n", secondarySum);

    if (n % 2 != 0) {
        int center = matrix[n / 2][n / 2];
        printf("Total Diagonal Sum (without double-counting center): %d\n",
               primarySum + secondarySum - center);
    } else {
        printf("Total Diagonal Sum: %d\n", primarySum + secondarySum);
    }

    return 0;
}