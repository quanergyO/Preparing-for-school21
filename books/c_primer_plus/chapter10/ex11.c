#include <stdio.h>

void print_array(int rows, int array[][5]);
void array_x2(int rows, int array[][5]);

int main(void)
{
    int array[3][5] = 
    {
	{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10},
	{11, 12, 13, 14, 15}
    };
    print_array(3, array);
    array_x2(3, array);
    print_array(3, array);
    return 0;
}

void array_x2(int rows, int array[][5])
{
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < 5; j++)
	{
	    array[i][j] = array[i][j] * 2;
	}
    }
}

void print_array(int rows, int array[][5])
{
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < 5; j++)
	{
	    printf("%3d", array[i][j]);
	}
	putchar('\n');
    }
}
