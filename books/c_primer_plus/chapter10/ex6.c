#include <stdio.h>

void change(double * array, int n);

int main(void)
{
    double array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    change(array, 5);
    for (int i = 0; i < 5; i++)
    {
	printf("%lf ", array[i]);
    }
    putchar('\n');
    return 0;
}

void change(double * array, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
	double tmp = array[i];
	array[i] = array[n-i-1];
	array[n-i-1] = tmp;
    }
}
