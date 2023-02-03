#include <stdio.h>
#include <limits.h>

void input_array_args(int rows, double arr[][5]);
void avg_in_array(int rows, double arr[][5]);
void max_in_2d_array(int rows, double arr[][5]);

int main(void)
{
    double array[3][5];
    input_array_args(3, array);
    avg_in_array(3, array);
    max_in_2d_array(3, array);
    return 0;
}

void max_in_2d_array(int rows, double arr[][5])
{
    double max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < 5; j++)
	{
	    if (arr[i][j] > max)
		max = arr[i][j];
	}
    } 
    printf("max = %lf\n", max);
}

void avg_in_array(int rows, double arr[][5])
{
    double avg_in_array = 0.0;
    double avg = 0.0;
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < 5; j++)
	{
	    avg_in_array += arr[i][j];
	}
	printf("avg in %d array = %lf\n", i+1, avg_in_array / 5);
	avg += avg_in_array;
	avg_in_array = 0.0;
    }
    printf("avg in 2d array = %lf\n", avg / 15);
}

void input_array_args(int rows, double arr[][5])
{
    for (int i = 0; i < rows; i++)
    {
	printf("Input 5 numbers:\n");
	for (int j = 0; j < 5; j++)
	{
	    scanf("%lf", &arr[i][j]);
	}
    }
}
