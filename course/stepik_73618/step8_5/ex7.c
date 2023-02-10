#include <stdio.h>

int main(void)
{
    int n; scanf("%d", &n);
    int a[10] = {0};
    for (int i = 0; i < n; i++)
    {
	int tmp;
	scanf("%d", &tmp);
	a[tmp]++;
    }
    for (int i = 0; i < 10; i++)
    {
	printf("%d %d\n", i, a[i]);
    }
    return 0;
}
