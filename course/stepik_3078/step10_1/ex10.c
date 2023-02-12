#include <stdio.h>

int is_prime(int k)
{
    for (int i = 2; i < k; i++)
    {
	if (k % i == 0)
	    return 0;
    }
    return 1;
}

int main(void)
{
    int k;
    scanf("%d", &k);
    factors(k);
    return 0;
}
