#include <stdio.h>

// 错因：标准输入格式化llu出错

int leap(unsigned long long int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        printf("Leap year!\n");
        return 0;
    }
    else
    {
        printf("Normal year!\n");
        return 1;
    }
}

int main(void)
{
    unsigned long long int n, k;
    scanf("%llu%llu", &n, &k);
    leap(n);
    leap(n + k);
    return 0;
}