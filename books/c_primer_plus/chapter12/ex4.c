#include <stdio.h>

int counter(void);

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
	printf("%d\n", counter());
    return 0;
}

int counter(void)
{
    static int count = 0;
    count++;
    return count;
}
