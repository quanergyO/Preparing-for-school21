#include <stdio.h>

#define N 1000

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[N];
    for (int i = 0; i < n; scanf("%d", &a[i++]));
    int k; scanf("%d", &k);
    int flag = -1;
    for (int i = 0; i < n; i++)
    {
	if (a[i] == k)
	{
	    flag = i;
	    break;
	}
    } 
    printf("%d\n", flag);
    return 0;
}
