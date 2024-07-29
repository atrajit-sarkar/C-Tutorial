#include <stdio.h>

int perfectnumber(int);

int perfectnumber(int n)
{
    int i = 1;
    int sum = 0;

    while (i < n)
    {
        if (n % i == 0)
        {
            sum += i;
            // printf("%d\t", i);
        }
        i++;
    }

    // printf("\nSum of proper divisors: %d\n", sum);

    if (sum == n)
    {
        // printf("%d is a perfect number\n", n);
        return 1;
    }
    else
    {
        // printf("%d is not a perfect number\n", n);
        return 0;
    }
}
int main()
{
    int N;
    printf("n = ");
    scanf("%d", &N);
    printf("The following are perfect numbers <= %d\n",N);
    for (int i = 1; i <= N; i++)
    {
        if (perfectnumber(i)==1)
        {
            printf("%d\t",i);
        }
        
    }
    return 0;
}
