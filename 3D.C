//three dimensional arrays
#include <stdio.h>

int main() {
    // Define and initialize a 3D array
    int numbers[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };

    // Print the 3D array without layer labels
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", numbers[i][j][k]);
            }
            printf("\n");
        }
        printf("\n"); // Print a newline between layers
    }

    return 0;
}
