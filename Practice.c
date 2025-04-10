#include <stdio.h>

int main() {
    int matA[3][3];
    int matB[3][3];
    int matC[3][3];
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element [%d][%d] of matrix A: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Matrix A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }
    return 0;
}
