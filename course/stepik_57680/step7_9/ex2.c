#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
	int tmp;
	scanf("%d", &tmp);
	if (tmp % 2 == 0)
	    count++;
    }
    printf("%d\n", count);
    return 0;
}
