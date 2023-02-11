#include <stdio.h>

#define N 1000

int main(void)
{
    int n; scanf("%d", &n);
    int v1[N];
    int v2[N];
    for (int i = 0; i < n; scanf("%d", &v1[i++]));
    for (int i = 0; i < n; scanf("%d", &v2[i++]));
    for (int i = 0; i < n; i++)
    {
	printf("%d ", v1[i] + v2[i]);
    }
    return 0;
}
