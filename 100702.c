#include <stdio.h>
#include <string.h>

// how to scanf string with spaces,and how to use getchar??

int main(void)
{
    int n, k;
    char ch[100000];
    scanf("%d", &n);
    getchar();
    fgets(ch, n + 1, stdin);
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        printf("%c", ch[k - 1 - i]);
    }
    for (int i = n - 1; i >= k; i--)
    {
        printf("%c", ch[i]);
    }
    return 0;
}
// good quiz!