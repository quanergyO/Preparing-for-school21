#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void sort_array(int *a, const int n);
void print_array(const int *a, const int n);

int main(void)
{
    int array[100];
    for (int i = 0; i < 100; i++)
    {
	int x = rand() % 10 + 1;
	array[i] = x;
    }
    sort_array(array, 100);
    print_array(array, 100); 

    return 0;
}

void sort_array(int *a, const int n)
{
    for (int i = 0; i < n - 1; i++)
    {
	for (int j = i+1; j < n; j++)
	{
	    if (a[j] < a[i])
	    {
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	    }
	}	
    } 
}

void print_array(const int *a, const int n)
{
    for (int i = 0; i < n; i++)
    {
	printf("%d ", a[i]);
    }
    putchar('\n');
}
