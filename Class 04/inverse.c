#include <stdio.h>

int main()
{
    int n, x, flag = 0;
    printf("X= ");
    scanf("%d", &x);
    printf("n= ");
    scanf("%d", &n);

    int y = x % n;

    // Definition of inverse
    for (int i = 0; i < n; i++)
    {
        int r = (y * i) % n;
        if (r == 1)
        {
            printf("The inverse of %d is %d\n", x, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The inverse desn't exits.\n");
    }

    return 0;
}