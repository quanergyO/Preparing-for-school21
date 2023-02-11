#include <stdio.h>

#define N 1000

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[N];
    for (int i = 0; i < n; scanf("%d", &a[i++]));
    int k;
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
	if (a[i] == k)
	{
	    printf("%d\n", i);
	    return 0;
	}
    }
    return 0;
}
