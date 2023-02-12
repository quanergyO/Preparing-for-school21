#include <stdio.h>

int min(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", min(a, b));
    return 0;
}

int min(int a, int b)
{
    return (a > b) ? b : a;
}
