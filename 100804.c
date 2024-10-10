#include <stdio.h>
// 数字黑洞，如何改进？

int max(int a, int b)
{
    int t;
    return a > b ? a : b;
}
int min(int a, int b)
{
    int t;
    return a < b ? a : b;
}

int max3(int n)
{
    int a, b, c, tmp;
    a = n / 100;
    c = n % 10;
    b = n / 10 % 10;
    if (a > max(b, c))
    {
        return a * 100 + max(b, c) * 10 + min(b, c);
    }
    else if (a < min(b, c))
    {
        return max(b, c) * 100 + min(b, c) * 10 + a;
    }
    else
    {
        return max(b, c) * 100 + a * 10 + min(b, c);
    }
}
int min3(int n)
{
    int a, b, c, tmp;
    a = n / 100;
    c = n % 10;
    b = n / 10 % 10;
    if (a > max(b, c))
    {
        return a + max(b, c) * 10 + min(b, c) * 100;
    }
    else if (a < min(b, c))
    {
        return max(b, c) + min(b, c) * 10 + a * 100;
    }
    else
    {
        return max(b, c) + a * 10 + min(b, c) * 100;
    }
}

int main(void)
{
    int n, sum = 0, tmp = 0;
    scanf("%d", &n);
    tmp = n;
    while (tmp != 495)
    {
        n = tmp;
        tmp = max3(tmp) - min3(tmp);
        if (n > tmp)
        {
            sum += (n - tmp);
        }
    }
    printf("%d", sum);
    return 0;
}