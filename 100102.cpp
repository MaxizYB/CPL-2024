#include <stdio.h>
// 以数组作为参数,计算不含max和min的平均数
float max(float *ptr, int size)
{
    float tmp = 0.0f;
    for (int i = 0; i < size; i++)
    {
        tmp = *(ptr + i) > tmp ? *(ptr + i) : tmp;
    }
    return tmp;
}
float min(float *ptr, int size)
{
    float tmp = *(ptr);
    for (int i = 0; i < size; i++)
    {
        tmp = *(ptr + i) < tmp ? *(ptr + i) : tmp;
    }
    return tmp;
}
float score(float *ptr, int size)
{
    float s = 0;
    for (int i = 0; i < size; i++)
    {
        s += *(ptr + i);
    }
    s = (s - max(ptr, size) - min(ptr, size)) / (size - 2);
    return s;
}
int main(void)
{
    float num[100][100] = {0}, tmp = 0;
    int size1, size2;
    scanf("%d%d", &size1, &size2);
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            scanf("%f", &num[i][j]);
        }
        if (score(num[i], size2) > tmp)
            tmp = score(num[i], size2);
    }
    printf("%.2f", tmp);
    return 0;
}