#include <stdio.h>

int sum(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
