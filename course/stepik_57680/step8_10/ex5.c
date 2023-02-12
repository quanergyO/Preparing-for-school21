#include <stdio.h>

unsigned long long fact(int n);
void pascal_triangle(int n);

int main(void)
{
    int n;
    scanf("%d", &n); 
    pascal_triangle(n);
    putchar('\n');
    return 0;
}

unsigned long long fact(int n)
{
    long res = 1;
    for (int i = 2; i <= n; i++)
	res *= i;
    return res;
}

void pascal_triangle(int n)
{
    for (int j = 0; j < n/2; j++)
    {
	int i = fact(n) / (fact(j) * fact(n-j));
	printf("%d ", i);
    }
    if (n % 2 == 0)
    {
	int i = fact(n) / (fact(n/2) * fact(n/2));
	printf("%d ", i);
    }
    else
    {
	int i = fact(n) / (fact(n/2) * fact(n/2+1));
	printf("%d %d ", i, i);
    }
    for (int j = n/2-1; j >= 0; j--)
    {
	int i = fact(n) / (fact(j) * fact(n-j));
	printf("%d ", i);
    }
}
