#include <stdio.h>

void factors(int k)
{
    for (int i = 1; i <= k; i++)
    {
	if (k % i == 0)
	    printf("%d ", i);
    }
}

int main(void)
{
    int k;
    scanf("%d", &k);
    factors(k);
    return 0;
}
