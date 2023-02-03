#include <stdio.h>
#include <limits.h>

int max_index(double * array, double * end);

int main(void)
{
    double array[10] = {1.5, 2.6, 11.43, 11.422, 5.2, 6.4, 10.1111, 3.11, 4.5, 0.1};
    printf("%d\n", max_index(array, array+10));
    return 0;
}

int max_index(double * array, double * end)
{
    int i = 0;
    int max_index;
    double max = -1; 
    while (array < end)
    {
	if (*array > max)
	{
	    max = *array;
	    max_index = i;
	}	
	array++;
	i++;
    }
    return max_index; 
}
