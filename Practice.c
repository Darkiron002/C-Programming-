#include <stdio.h>

int main() {
    int matA[3][3];
    int matB[3][3];
    int matC[3][3];
    int matD[3][3];
    int matB_C[3][3];
    int i, j, k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element [%d][%d] of matrix A: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("Enter element [%d][%d] of matrix B: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("Enter element [%d][%d] of matrix C: ", i, j);
            scanf("%d", &matC[i][j]);
        }
    }
    for(i=0; i< 3; i++){
        for(j= 0 ; j <3; j++) {
            matB_C[i][j] = 0;
            matB_C[i][j] = matB[i][j] + matC[i][j];
        }
    }
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            matD [i][j] = 0;
            for(k=0; k < 3; k++){
                matD[i][j] += matA[i][k] * matB_C[k][j];
            } 
        }
    }
    printf("Matrix D:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matD[i][j]);
        }
        printf("\n");
    }
    return 0;
}
