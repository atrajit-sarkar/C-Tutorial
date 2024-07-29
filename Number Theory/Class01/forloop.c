#include <stdio.h>

int main()
{
    int n;
    printf("n= ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i < n; i++) // Note the change here: i < n (not i <= n)
    {
        if (n % i == 0)
        {
            sum += i;
            printf("%d\t", i);
        }
    }

    printf("\nSum of proper divisors: %d\n", sum);

    if (sum == n)
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {
        printf("%d is not a perfect number\n", n);
    }

    return 0;
}
