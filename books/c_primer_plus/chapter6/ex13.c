#include <stdio.h>

int main(void)
{
    double array1[8];
    double array2[8];
    double sum = 0;
    for (int i = 0; i < 8; i++)
    {
	scanf("%lf", &array1[i]);
	sum += array1[i];
	array2[i] = sum;
    }

    for (int i = 0; i < 8; i++)
    {
	printf("%7.2lf ", array1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
	printf("%7.2lf ", array2[i]);
    }

    return 0;
}
