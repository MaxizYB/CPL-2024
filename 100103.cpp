// 挑战不用循环写n！
#include <stdio.h>

long int jiecheng(int n)
{
    if (n > 1)
        return n * jiecheng(n - 1);
    else
        return 1;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%ld", jiecheng(n));
    return 0;
}