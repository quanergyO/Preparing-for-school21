#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

void scan_matrix(int matrix[ROWS][COLUMNS]);
void print_matrix(int matrix[ROWS][COLUMNS]); 

int main(void)
{
    int matrix[ROWS][COLUMNS];
    scan_matrix(matrix);
    matrix[1][2] *= 10;
    print_matrix(matrix);
    return 0;
}

void scan_matrix(int matrix[ROWS][COLUMNS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLUMNS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
}

void print_matrix(int matrix[ROWS][COLUMNS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        putchar('\n'); 
    }
}
