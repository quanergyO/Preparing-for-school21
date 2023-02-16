#include <stdio.h>

void sum(int rows, int cols, int a[10][10], int b[10][10], int c[10][10]);
void scan_matrix(int row, int cols, int a[][cols]);
void print_matrix(int row, int cols, int matrix[10][10]);

int main(void)
{
    int row, cols;
    scanf("%d%d", &row, &cols);
    int a[row][cols];
    int b[row][cols];
    int sum_m[row][cols];
    scan_matrix(row, cols, a);
    scan_matrix(row, cols, b);
    sum(row, cols, a, b, sum_m);
    print_matrix(row, cols, sum_m);

    return 0;
}

void sum(int rows, int cols, int a[rows][cols], int b[rows][cols], int c[rows][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void scan_matrix(int row, int cols, int a[][cols])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void print_matrix(int row, int cols, int matrix[row][cols])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        putchar('\n');
    }
}
