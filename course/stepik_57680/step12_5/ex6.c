#include <stdio.h>
#include <stdlib.h>

int cmpfunc1(const void * p1, const void * p2);
int cmpfunc2(const void * p1, const void * p2);
int cmpfunc3(const void * p1, const void * p2);
int cmpfunc4(const void * p1, const void * p2);

void print_arr(const int * ar, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; scanf("%d", &arr[i++]))
        ;
    qsort(arr, n, sizeof(int), cmpfunc4);
    qsort(arr, n, sizeof(int), cmpfunc3);
    qsort(arr, n, sizeof(int), cmpfunc2);
    qsort(arr, n, sizeof(int), cmpfunc1);
    print_arr(arr, n);

}

int cmpfunc1(const void * p1, const void * p2)
{
    int x = (*(int *)p1) % 10;
    int y = (*(int *)p2) % 10;
    return (x > y) - (x < y);
}

int cmpfunc2(const void * p1, const void * p2)
{
    int x = (*(int *)p1) % 100 / 10;
    int y = (*(int *)p2) % 100 / 10;
    return (x > y) - (x < y);
}

int cmpfunc3(const void * p1, const void * p2)
{
    int x = (*(int *)p1) / 100 % 10;
    int y = (*(int *)p2) / 100 % 10;
    return (x > y) - (x < y);
}

int cmpfunc4(const void * p1, const void * p2)
{
    int x = (*(int *)p1) / 1000;
    int y = (*(int *)p2) / 1000;
    return (x > y) - (x < y);
}

void print_arr(const int * ar, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);
    putchar('\n');
}
