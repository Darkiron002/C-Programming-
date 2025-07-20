# include<stdio.h>
int main (){
    int mat[3][3], i, j, sum = 0;
    int matb[3][3];
    int matc[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3;j++){
            printf("The elements of the matrix are: %d, %d ",i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3;j++){
            printf("The elements of the matrix are: %d, %d ",i, j);
            scanf("%d", &matb[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3;j++){
            matc[i][j] = mat[i][j] + matb[i][j];
        }
    }
    printf("Resultant matrix after addition:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3;j++){
            printf("%d ", matc[i][j]);
        }printf(" \n");
    }
    return 0;
}