#include <stdio.h>

void swap(int * a, int * b);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap(a, b);

    return 0;
}

void swap(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
