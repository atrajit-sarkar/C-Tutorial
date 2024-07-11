#include <stdio.h>

int main(){
    int m, n;
    printf("Enter row and column number: ");
    scanf("%d,%d", &m, &n);
    int A[m][n];
    // Storing The Matrix Values...........
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d",&A[i][j]);

        }
    }
    // Printing The Matrix..........
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",A[j][i]);

        }
        printf("\n");
    }
    return 0;
}