#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
	res *= i;
    }
    printf("%d\n", res);
    return 0;
}
