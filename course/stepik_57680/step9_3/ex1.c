#include <stdio.h>

#define SIZE 3

void scan_matrix(int matrix[SIZE][SIZE]);
void print_matrix(int matrix[SIZE][SIZE]);
int sum_elements(int matrix[SIZE][SIZE]);
int sum_row(int a[SIZE][SIZE], int irow);
int sum_col(int a[SIZE][SIZE], int icol);
int sum_diag(int a[SIZE][SIZE]);
int sum_diag2(int a[SIZE][SIZE]);
int is_magic(int (*a)[SIZE]);


int main(void)
{
    int matrix[SIZE][SIZE];
    scan_matrix(matrix);
    printf("%s\n", is_magic(matrix)? "MAGIC": "NO");

    return 0;
}

int is_magic(int (*a)[SIZE])
{
    int i;
    int sm_row[SIZE];
    int sm_column[SIZE];
    for (i = 0; i < SIZE; i++)
    {
        sm_row[i] = sum_row(a, i);
        sm_column[i] = sum_col(a, i);
    }
    int sm_diag = sum_diag(a);
    int sm_diag2 = sum_diag(a);
    int flag = sm_row[0] == sm_row[1] && sm_row[0] == sm_row[2] && sm_row[0] == sm_column[0] &&
        sm_row[0] == sm_column[1] && sm_row[0] == sm_column[2] && sm_row[0] == sm_diag &&
        sm_row[0] == sm_diag2;
    return flag;
}

int sum_diag2(int a[SIZE][SIZE])
{
    int sum = 0;
    int i, j;
    for (i = 0, j = SIZE-1; i < SIZE; i++, j--)
    {
        sum += a[i][j];
    }
    return sum;
}

int sum_diag(int a[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += a[i][i];
    return sum;
}

int sum_col(int a[SIZE][SIZE], int icol)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += a[i][icol];
    }
    return sum;
}

int sum_row(int a[SIZE][SIZE], int irow)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += a[irow][i];

    return sum;
}

int sum_elements(int matrix[SIZE][SIZE])
{
    int sum = 0;
    int i, j;
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            sum += matrix[i][j];

    return sum;
}

void print_matrix(int matrix[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; printf("%d ", matrix[i][j++]))
            ;
        putchar('\n');
    }
}

void scan_matrix(int matrix[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; scanf("%d", &matrix[i][j++]));
}
