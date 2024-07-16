#include <stdio.h>

int main(){
    float A[2][2];
    // Writing The matrix.......
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%f",&A[i][j]);
        }
    }
    // Display Matrix.......
    printf("\nYour Matrix is.......\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%f\t",A[i][j]);
        }
        printf("\n");
    }
    // Evaluating Determinant......
    float det;
    det=A[0][0]*A[1][1]-A[1][0]*A[0][1];
    printf("\nDet is: %f",det);
    return 0;
}