

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2, cols = 3;

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int result[3][2];

    // Transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    // Print transposed matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
