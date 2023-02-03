#include <stdio.h>

void init_array(int rows, int cols, double arr[][cols]);
void copy_array(int rows, int cols, double source[rows][cols], double target[rows][cols]);
void print_array(int rows, int cols, double ar[rows][cols]);

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    double source[n][m];
    double target[n][m];
    init_array(n, m, source);
    print_array(n, m, source);
    printf("***********************\n");
    copy_array(n, m, source, target);
    print_array(n, m, target);
    return 0;
}

void print_array(int rows, int cols, double ar[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < cols; j++)
	{
	    printf("%lf ", ar[i][j]);
	}
	putchar('\n');
    }
    putchar('\n');
}

void init_array(int rows, int cols, double arr[][cols])
{
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < cols; j++)
	{
	    arr[i][j] = i * j * 1.15 + i + j;
	}
    } 
}

void copy_array(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < cols; j++)
	{
	    *(*(target+i)+j) = source[i][j];
	}
    }
}
