#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
	int tmp;
	scanf("%d", &tmp);
	if (tmp < min)
	    min = tmp;
    }
    printf("%d\n", min);
    return 0;
}
