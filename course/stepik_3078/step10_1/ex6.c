#include <stdio.h>

int sequence_multipliers(int k);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sequence_multipliers(n));
    return 0;
}

int sequence_multipliers(int k)
{
    int i = 1;
    while (i * (i+1) * (i+2) <= k)
    {
	if (i * (i+1) * (i+2) == k)
	    return i;
	i++;
    }
    return -1;
}
