#include <stdio.h>
#include <stdbool.h>

#define SIZE 9

void scan_matrix(int (*a)[SIZE]);
bool is_row(int (*a)[SIZE], int row);
bool is_column(int (*a)[SIZE], int col);
bool is_square(int (*a)[SIZE], int row, int col);
bool is_sudoky(int (*a)[SIZE]);
bool is_correct(bool flag[SIZE]);

int main(void)
{
    int sudoku[SIZE][SIZE];
    scan_matrix(sudoku);
    printf("%s\n", is_sudoky(sudoku)? "YES": "NO");
    return 0;
}

bool is_sudoky(int (*a)[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        bool flag = is_row(a, i) && is_column(a, i);
        if (!flag)
            return false;
    }
    return is_square(a, 1, 1); 
}

bool is_square(int (*a)[SIZE], int row, int col)
{
    if (row > 8 || col > 8)
        return true;
    bool flag[SIZE] = {0};
    for (int i = row-1; i <= row+1; i++)
    {
        for (int j = col-1; j <= col+1; j++)
        {
            int tmp = a[i][j] - 1;
            flag[tmp]++;
        }
    }
    col += 3;
    if (col == 10)
    {
        col = 1;
        row += 3;
    }
    return is_correct(flag) && is_square(a, row, col);
}

bool is_column(int (*a)[SIZE], int col)
{
    bool flag[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
    {
        int tmp = a[i][col] - 1;
        flag[tmp]++;
    }
    return is_correct(flag);
}

bool is_row(int (*a)[SIZE], int row)
{
    bool flag[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
    {
        int tmp = a[row][i] - 1;
        flag[tmp]++;
    }
    return is_correct(flag);
}

void scan_matrix(int (*a)[SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &a[i][j]);
}

bool is_correct(bool flag[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (!flag[i])
            return false;
    }
    return true;
}
