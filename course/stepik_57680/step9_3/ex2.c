#include <stdio.h>

void number_mult(int k, int rows, int cols, int a[][cols]);
void scan_matrix(int row, int cols, int a[][cols]);
void print_matrix(int row, int cols, int a[][cols]);

int main(void)
{
    int row, col; scanf("%d%d", &row, &col);
    int matrix[row][col];
    scan_matrix(row, col, matrix);
    int k; scanf("%d", &k);
    number_mult(k, row, col, matrix);
    print_matrix(row, col, matrix);

    return 0;
}

void print_matrix(int row, int cols, int a[][cols])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; printf("%d ", a[i][j++]))
            ;
        putchar('\n');
    }
}

void number_mult(int k, int rows, int cols, int a[][cols])
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            a[i][j] *= k;
}

void scan_matrix(int row, int cols, int a[][cols])
{
    for (int i = 0; i < row; i++)
        for (int j = 0 ; j < cols; scanf("%d", &a[i][j++]));
}
