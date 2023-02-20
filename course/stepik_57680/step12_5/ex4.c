#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * p1, const void * p2);

int main(void)
{
    int n; scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; scanf("%f", &arr[i++]))
        ;
    qsort(arr, n, sizeof(float), cmpfunc);
    for (int i = 0; i < n; printf("%.2f ", arr[i++]))
        ;

    return 0;
}

int cmpfunc(const void * p1, const void * p2)
{
    float x = *(float *)p1;
    float y = *(float *)p2;
    return (x > y) - (x < y);
}
