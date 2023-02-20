#include <stdio.h>

int cmp_int(const void * p1, const void * p2);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", cmp_int(&a, &b));

    return 0;
}

int cmp_int(const void * p1, const void * p2)
{
    if (*(int *)p1 > *(int *)p2)
        return 1;
    else if (*(int *)p1 < *(int *)p2)
        return -1;
    return 0;
}
