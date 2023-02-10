#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
    int * pa;
    int size;
    int value;

    printf("Enter the number of items: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
	printf("Enter the init value: ");
	scanf("%d", &value);
	pa = make_array(size, value);
	if (pa)
	{
	   show_array(pa, size);
	   free(pa);
	}
	printf("Enter the number of items (-1 for quit): ");
    }
    printf("END.\n");
    return 0;
}

int * make_array(int elem, int val)
{
    int * p = (int *)malloc(sizeof(int) * elem);
    for (int i = 0; i < elem; i++)
    {
	p[i] = val;
    }
    return p;
}

void show_array(const int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
	printf("%d ", ar[i]);
    }
    putchar('\n');
}
