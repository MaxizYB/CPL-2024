#include <stdio.h>
#include <math.h>
double distance(double a, double b, double c, double d)
{
    double n;
    n = sqrt(pow(a - c, 2) + pow(b - d, 2));
    return n;
}
int main(void)
{
    double x[4], y[4];
    for (int i = 1; i <= 3; i++)
        scanf("%lf %lf", x + i, y + i);
    printf("%.2lf", distance(x[1], y[1], x[2], y[2]) + distance(x[1], y[1], x[3], y[3]) + distance(x[3], y[3], x[2], y[2]));
    return 0;
}