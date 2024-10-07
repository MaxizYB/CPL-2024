#include <stdio.h>

// 优化数据问题

int main(void)
{
    unsigned long long int n, tmp = 1, sum = 0;
    scanf("%llu", &n);
    for (int i = 1; i <= n; i++)
    {
        tmp *= i;
        tmp %= 1000000007;
        sum += (tmp % 1000000007);
    }
    printf("%llu", sum % 1000000007);
    return 0;
}