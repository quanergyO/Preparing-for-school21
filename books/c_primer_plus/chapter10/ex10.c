#include <stdio.h>

void sum_arrays(int *ar1, int *ar2, int *ar3, int n);

int main(void)
{
    int array1[] = {2, 4, 5, 8};
    int array2[] = {1, 0, 4, 6};
    int array3[4];
    sum_arrays(array1, array2, array3, 4);
    for (int i = 0; i < 4; i++)
	printf("%d ", array3[i]);
    putchar('\n');
    return 0;
}

void sum_arrays(int *ar1, int *ar2, int *ar3, int n)
{
    for (int i = 0; i < n; i++)
	ar3[i] = ar1[i] + ar2[i];
}
