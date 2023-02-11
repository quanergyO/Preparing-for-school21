#include <stdio.h>

#define N 1000

int main(void)
{
    int n; scanf("%d", &n);
    int sum = 0;
    int v1[N];
    int v2[N];
    for (int i = 0; i < n; scanf("%d", &v1[i++]));
    for (int i = 0; i < n; scanf("%d", &v2[i++]));
    for (int i = 0; i < n; i++)
    {
	sum += v1[i] * v2[i];
    }
    printf("%d\n", sum);
    return 0;
}
