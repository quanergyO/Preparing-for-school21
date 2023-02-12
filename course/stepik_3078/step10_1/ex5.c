#include <stdio.h>

int factorial(int p);
int combin(int n, int k);

int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", combin(n, k));
    return 0;
}

int combin(int n, int k)
{
    int res = factorial(n) / (factorial(k) * factorial(n-k));
    return res;
}

int factorial(int p)
{
    int res = 1;
    for (int i = 2; i <= p; i++)
	res *= i;
    return res;
}
