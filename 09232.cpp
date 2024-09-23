#include <stdio.h>
int main(void)
{
    int a, s[10000] = {0}, i = 0;
    scanf("%d", &a);
    while (a != 1)
    {
        s[i++] = a;
        if (a % 2 == 0)
        {
            a /= 2;
        }
        else
            a = 3 * a + 1;
    }
    i--;
    printf("1 ");

    for (; i >= 0; i--)
        printf("%d ", s[i]);
    return 0;
}