#include <stdio.h>

void copy_ptr(double * inside, double * out, int n);

int main(void)
{
    double source[2][3] = 
    {
	{1.1, 2.2, 3.3},
	{4.4, 5.5, 6.6}
    };
    double target[2][3];
    for (int i = 0; i < 2; i++)
    {
	copy_ptr(target[i], source[i], 3);
    }

    for (int i = 0; i < 2; i++)
    {
	for (int j = 0; j < 3; j++)
	{
	    printf("%lf ", target[i][j]);
	}
	putchar('\n');
    }
    return 0;	
}

void copy_ptr(double * inside, double * out, int n)
{
    for (int i = 0; i < n; i++)
    {
	*inside = *out;
	inside++; out++;
    }
}

