#include <stdio.h>

int main(void)
{
    long long int n, tmp = 1, sum = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        tmp *= i;
        sum += tmp;
    }
    printf("%lld", sum % 1000000007);
    return 0;
}