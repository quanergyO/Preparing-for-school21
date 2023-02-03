#include <stdio.h>

#define MONTHS 12
#define YEARS 5

void print_all_sum(int rows, const float array[][MONTHS]);
void print_per_months(int rows, const float array[][MONTHS]);

int main(void)
{
    const float rain[YEARS][MONTHS] =
    {
	{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
	{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
       	{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
       	{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    print_all_sum(5, rain);
    print_per_months(5, rain);
    return 0;
}

void print_per_months(int rows, const float array[][MONTHS])
{
    float subtotal = 0;
    for (int i = 0; i < MONTHS; i++)
    {
	for (int j = 0; j < rows; j++)
	{
	    subtotal += array[j][i];
	}
	printf("%4.1f ", subtotal / YEARS);
	subtotal = 0;
    }
    putchar('\n');
}

void print_all_sum(int rows, const float array[][MONTHS])
{
    float subtotal = 0;
    float total = 0;
    for (int i = 0; i < rows; i++)
    {
	for (int j = 0; j < MONTHS; j++)
	{
	    subtotal += array[i][j];
	}
	printf("%5d %15.1lf\n", 2010 + i, subtotal);
	total += subtotal;
	subtotal = 0;
    }
    printf("total = %.1f\n", total / YEARS);
}
