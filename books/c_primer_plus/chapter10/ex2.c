#include <stdio.h>

void print_arr(double * arr, int n);
void copy_arr(double inside[], double out[], int n);
void copy_ptr(double * inside, double * out, int n);
void copy_ptrs(double * inside, double * out, double * end);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    print_arr(target3, 5);
    return 0;
}

void copy_ptrs(double * inside, double * out, double * end)
{
    while (out < end)
    {
	*inside = *out;
	inside++; out++;
    }
}	

void copy_ptr(double * inside, double * out, int n)
{
    for (int i = 0; i < n; i++)
    {
	*inside = *out;
	inside++; out++;
    }
}

void copy_arr(double inside[], double out[], int n)
{
    for (int i = 0; i < n; i++)
    {
	inside[i] = out[i];
    }
}

void print_arr(double * arr, int n)
{
    for (int i = 0; i < n; i++)
	printf("%.1lf ", arr[i]);
    putchar('\n');
}
