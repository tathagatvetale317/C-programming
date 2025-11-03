/* NAME: TATHAGAT GAUTAM VETALE
UIN :- 251C025
CLASS:- CIVIL
ROLL NO:- 20
DIV:- B */
#include <stdio.h>

int main() {
    int a[2][2] = {
        {1, 2},
        {3, 4}
    };
    int b[2][2] = {
        {5, 6},
        {7, 8}
    };
    int sum[2][2];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j< 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
        return 0;
}
