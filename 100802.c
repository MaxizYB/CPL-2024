#include <stdio.h>
// Q:L格式说明符何时可以使用？

int main(void)
{
    long long int sum = 0, tmp = 1;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        tmp = tmp * i % 10007;
        sum += tmp;
    }
    printf("%lld", sum % 10007);
    return 0;
}