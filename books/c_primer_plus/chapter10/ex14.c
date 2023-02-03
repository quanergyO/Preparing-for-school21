#include <stdio.h>
#include <limits.h>

void input_array(int rows, int cols, double arr[][cols]);
double avg_in_1d_array(int rows, double arr[]);
double avg_in_2d_array(int rows, int cols, double arr[][cols]);
double max_in_2d_array(int rows, int cols, double arr[][cols]);
void print_answers(double max, double avg, int rows, int cols, double arr[][cols]);

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    double array[n][m];
    input_array(n, m, array);
    double avg = avg_in_2d_array(n, m, array);
    double max = max_in_2d_array(n, m, array);
    print_answers(max, avg, n, m, array);
    return 0;
}

void print_answers(double max, double avg, int rows, int cols, double arr[][cols])
{
    printf("Max in 2d array = %.2lf\n", max);
    printf("avg in 2d array = %.2lf\n", avg);
    for (int i = 0; i < rows; i++)
    {
	printf("avg in %d = %.2lf\n", i+1, avg_in_1d_array(cols, arr[i]));
    }
}

double max_in_2d_array(int rows, int cols, double arr[][cols])
{
    double max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < cols; j++)
	{
	    if (arr[i][j] > max)
	    {
		max = arr[i][j];
	    }
	}
    }
    return max;
}

double avg_in_2d_array(int rows, int cols, double arr[][cols])
{
    double avg = 0.0;
    for (int i = 0; i < rows; i++)
    {
	avg += avg_in_1d_array(cols, arr[i]);
    }
    return avg / (rows * cols);
}

double avg_in_1d_array(int rows, double arr[])
{
    double avg = 0;
    for (int i = 0; i < rows; i++)
    {
	avg += arr[i];
    }
    return avg / rows;
}

void input_array(int rows, int cols, double arr[][cols])
{
    printf("Input %d numbers\n", rows*cols);
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < cols; j++)
	{
	    scanf("%lf", &arr[i][j]);
	}
    }
}


