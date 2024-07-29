#include <stdio.h>
#include "linearAlgebra.h"

int main()
{
    float A[4][4];
    float B[3][3];
    float *ptr_A[4];
    float *ptr_B[3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    printf("The Matrix A is...........\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%f\t", A[i][j]);
            // scanf("%f", &A[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        ptr_A[i] = A[i];
    }

    minorMatrix(1, 2, 4, 4, ptr_A, ptr_B);

    // for (int i = 0; i < 3; i++)
    // {
    //     ptr_B[i] = B[i];
    // }
    printf("The Matrix B(Minor of A) is................\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f\t", *ptr_B[i]);
            ptr_B[i]++;
        }
        printf("\n");
    }

    return 0;
}