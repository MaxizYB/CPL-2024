// 最佳数质数问题 如何分配超大空间heap堆动态分配空间 bool型如何使用
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    bool *a = (bool *)malloc(500000000 * sizeof(bool));
    int n, k = 0;
    scanf("%d", &n);
    if (n == 1)
        printf("0");
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (a[i] == 1)
                continue;
            else
            {
                for (int j = i; j * i <= n; j++)
                {
                    a[j * i] = 1;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
                k++;
        }
        printf("%d", k - 1);
    }
    return 0;
}