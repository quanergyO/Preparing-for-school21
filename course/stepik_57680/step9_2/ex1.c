#include <stdio.h>

#define SIZE 3

void scan_matrix(int matrix[SIZE][SIZE]);
void print_matrix(int matrix[SIZE][SIZE]);
int sum_elements(int matrix[SIZE][SIZE]);

int main(void)
{
    int matrix[SIZE][SIZE];
    scan_matrix(matrix);
    printf("%d\n", sum_elements(matrix));

    return 0;
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
