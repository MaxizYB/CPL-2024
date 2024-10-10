#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 数组如何不在声明的时候初始化,对数组批量操作,如何不用数组处理这道题？？OJ2-2

int main(void)
{
    int *a = (int *)malloc(sizeof(int) * 1000005);
    // short int *b = (short int *)malloc(sizeof(short int) * 1000005);
    short int b[1000005] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        scanf("%d", a + i);
        b[a[i]]++;
    }
    int j = 0;
    while (b[j++] != 1)
        ;
    printf("%d", j - 1);
    return 0;
}