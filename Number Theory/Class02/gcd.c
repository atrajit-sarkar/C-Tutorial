/*
gcd(30,20)=10
*/

#include <stdio.h>
int gcd(int, int);

int gcd(int m, int n)
{
    if (m >= n)
    {
        if (m % n == 0)
        {
            return n;
        }
        else
        {
            gcd(n, m % n);
        }
    }
    else
    {
        gcd(n, m);
    }
}
int main()
{
    int m = 20, n = 45;
    printf("GCD(%d,%d)=%d\n", m, n, gcd(m, n));
    printf("LCM(%d,%d)=%d\n",m,n,(m*n)/gcd(m,n));
    return 0;
}