#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int stop = n + 10;
    while (n <= stop)
    {
	printf("%d\n", n);
	n++;
    }
    return 0;
}
