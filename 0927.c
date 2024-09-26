#include <stdio.h>
int main(void)
{
    int a[10000] = {0}, start, final, n1, n2, sum = 0;
    scanf("%d%d", &n1, &n2);
    for (int i = 0; i <= n1; i++)
    {
        a[i] = 1;
    }
    for (int i = 1; i <= n2; i++)
    {
        scanf("%d%d", &start, &final);
        for (int j = start; j <= final; j++)
        {
            a[j] = 0;
        }
    }
    for (int i = 0; i <= n1; i++)
    {
        if (a[i] == 1)
            sum += 1;
    }
    printf("%d", sum);
    return 0;
}
