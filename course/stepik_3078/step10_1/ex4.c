#include <stdio.h>

int factorial(int k);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}

int factorial(int k)
{
    int res = 1;
    for (int i = 2; i <= k; i++)
	res *= i;
    return res;
}
