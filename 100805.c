#include <stdio.h>

int max(int a, int b)
{
    int t;
    return a > b ? a : b;
}

int main(void)
{
    int n;
    int s[100005] = {0}, sum = 0, now = 0, add = 0, aadd = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", s + i);
        sum += s[i];
    }
    int i = 1;
    now = s[0];

    do
    {

        add = 0;
        if (s[i] != 0)
        {
            if (now >= i)
            {
                now += s[i];
            }
            else
            {
                add += i - now;
                now = i + s[i];
            }
        }
        i++;
        aadd += add;

    } while (i <= n);
    printf("%d", aadd);
    return 0;
}