#include <stdio.h>

int main(void)
{
    int n, m; scanf("%d %d", &n, &m); int array[n][m];
    int ans[m];
    for (int i = 0; i < m; i++)
	ans[i] = 0;

    for (int i = 0; i < n; i++)
	    for (int j = 0; j < m; j++)
	    {
		scanf("%d", &array[i][j]);
	    }
    
    for (int i = 0; i < m; i++)
    {
	for (int j = 0; j < n; j++)
	{
	    ans[i] += array[j][i];
	}
    }

    for (int i = m-1; i >= 0; i--)
	printf("%d ", ans[i]);

    return 0;
}
