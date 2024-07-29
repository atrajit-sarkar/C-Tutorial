#include <stdio.h>
#include "linearAlgebra.h"

float **minorMatrix(int k, int l, int m, int n, float **ptr_A)
{
    // float *ptr_B[m - 1];
    float **ptr_B;
    int p = 0;
    for (int i = 0; i < m; i++)
    {
        if (i != k)
        {
            ptr_A += i;
            for (int j = 0; j < n; j++)
            {
                if (j != l)
                {
                    // ptr_A[i] = ptr_A[i] + j;
                    *ptr_A += j;
                    *ptr_B = *ptr_A;
                    *ptr_A -= j;
                    *ptr_B++;
                }
            }
            ptr_B++;
            ptr_A -= i;
        }
    }
    return ptr_B;
}