#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b);

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; scanf("%d", &arr[i++]));
    qsort(arr, n, sizeof(int), cmpfunc);
    for (int i = 0; i < n; printf("%d ", arr[i++]));
    putchar('\n');

    return 0;
}

int cmpfunc(const void * a, const void * b)
{
    const int x = *(int *)a;
    const int y = *(int *)b;
    return (x > y) - (x < y);
}
