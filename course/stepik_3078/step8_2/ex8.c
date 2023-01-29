#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    scanf("%d", &array[i][j]);
	}
    }

    int array_count[m];
    for (int i = 0; i < m; i++)
    {
	array_count[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
	int sm = 0;
	for (int j = 0; j < n; j++)
	{
	   sm += array[j][i];
	}
	array_count[i] = sm;
    }

    int max = -9999999;
    int min = 99999999;
    int max_index, min_index;

    for (int i = 0; i < m; i++)
    {
	if (array_count[i] > max)
	{
	    max = array_count[i];
	    max_index = i;
	}
	if (array_count[i] < min)
	{
	    min = array_count[i];
	    min_index = i;
	}
    }

    for (int i = 0; i < n; i++)
    {
	int tmp = array[i][min_index];
	array[i][min_index] = array[i][max_index];
	array[i][max_index] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j < m; j++)
	{
	    printf("%d ", array[i][j]);
	}
	printf("\n");
    }

    return 0;
}
