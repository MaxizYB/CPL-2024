#include <stdio.h>
#include <math.h>
int main(void)
{
    int i = 0, a[100];
    while (i < 3)
    {
        scanf("%d", a + i);
        printf("%d", a[i]);
        i++;
    }
    return 0;
}
// sqrt(pow(x,2)+3) == x - 2;