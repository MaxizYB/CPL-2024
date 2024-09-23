// 数字反转
#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)
{
    int num, s = 0;
    cin >> num;
    if (num < 0)
    {
        num = -num;
        for (; num > 0;)
        {
            s = s * 10 + num % 10;
            num /= 10;
        }
        printf("-%d", s);
    }
    else
    {
        for (; num > 0;)
        {
            s = s * 10 + num % 10;
            num /= 10;
        }
        printf("%d", s);
    }
    return 0;
}