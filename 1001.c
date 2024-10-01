#include <stdio.h>
int lastyear = 0, year[1000], j = 0;

// 判断闰年函数

int leapyear(int x, int y)
{
    int sum = 0;
    for (int i = x; i <= y; i++)
    {
        if (i % 4 == 0 && i % 100 != 0)
        {
            sum += 1;
            year[j++] = i;
        }
        else if (i % 400 == 0)
        {
            sum += 1;
            year[j++] = i;
        }
    }
    return sum;
}

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", leapyear(x, y));
    for (int i = 0; i < j; i++)
        printf("%d ", year[i]);
    return 0;
}
