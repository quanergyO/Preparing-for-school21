#include <stdio.h>
#include <limits.h>

double sub_of_max_and_min(double * array, double * end);

int main(void)
{
    double array[10] = {1.5, 2.6, 11.43, 11.422, 5.2, 6.4, 10.1111, 3.11, 4.5, 0.1};
    printf("%lf\n", sub_of_max_and_min(array, array+10));
    return 0;
}

double sub_of_max_and_min(double * array, double * end)
{
    double min = (double)INT_MAX;
    double max = (double)INT_MIN;
    while (array < end)
    {
	if (*array < min)
	{
	    min = *array;
	}
	else if (*array > max)
	{
	    max = *array;
	}
	array++;
    }
    return max - min;
}
