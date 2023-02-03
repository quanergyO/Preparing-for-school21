#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d%d", &m, &n);
    int array[m][n];
    int r_border = n - 1;
    int t_border = 0;
    int b_border = m - 1;
    int l_border = 0;
    int count = 1;
    int i = 0;
    int j = 0;
    while (count <= m * n)
    {
	while (j <= r_border)
	{
	    array[i][j] = count;
	    count++; j++;
	}
	j--; t_border++; i++;
	while (i <= b_border)
	{
	    array[i][j] = count;
	    count++; i++;
	}
	r_border--; j--; i--;
	while (j >= l_border)
	{
	    array[i][j] = count;
	    count++; j--;
	}
	b_border--; i--; j++;
	while (i >= t_border)
	{
	    array[i][j] = count;
	    count++; i--;
	}
	l_border++; i++; j++;
    }
    for (int k = 0; k < m; k++)
    {
	for (int l = 0; l < n; l++)
	{
	    printf("%3d ", array[k][l]);
	}
	putchar('\n');
    }
    return 0;
}
