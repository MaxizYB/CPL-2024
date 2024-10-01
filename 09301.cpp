// 质数筛
#include <stdio.h>
#include <math.h>

int zss(int a)
{
    if (a == 1)
        return 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int num[101] = {0}, temp[101] = {0}, i = 0, j = 0, n = 0;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", num + i);
        if (zss(num[i]) == 1)
        {
            temp[j++] = num[i];
        }
        i++;
    }
    /*for (; i < n; i++)
    {
        scanf("%d", num + i);
        if (zss(num[i]) == 1)
        {
            temp[j++] = num[i];
        }
    }*/
    for (int k = 0; k < j; k++)
    {
        printf("%d ", temp[k]);
    }
    return 0;
}