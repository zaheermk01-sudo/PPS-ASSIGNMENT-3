
#include <stdio.h>

int main() {
    int mat[2][2] = {
        {1, 2},
        {3, 4}
    };

    int m = 2, n = 2;
    int r = 1, c = 4;

    if (m * n != r * c) {
        printf("Original Matrix:\n");

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }
    else {
        int result[300][300];

        for (int i = 0; i < m * n; i++) {
            result[i / c][i % c] = mat[i / n][i % n];
        }

        printf("Reshaped Matrix:\n");

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
