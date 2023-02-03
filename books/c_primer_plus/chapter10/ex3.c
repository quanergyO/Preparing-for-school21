#include <stdio.h>
#include <limits.h>

int max_in_array(int * array, int * end);

int main(void)
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
	array[i] = i * 2;
    }
    printf("%d\n", max_in_array(array, array + 10));
    return 0;
}

int max_in_array(int * array, int * end)
{
    int max = INT_MIN;
    while (array < end)
    {
	if (*array > max)
	{
	    max = *array;
	    array++;
	}
    }
    return max; 
}
