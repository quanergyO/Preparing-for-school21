#include <stdio.h>

void normalize(int * a);

int main(void)
{
    int a;
    scanf("%d", &a);
    normalize(&a);
    printf("%d\n", &a);

    return 0;
}

void normalize(int * a)
{
    while (*a % 2 == 0 && *a > 0)
        *a = *a / 2;
}
