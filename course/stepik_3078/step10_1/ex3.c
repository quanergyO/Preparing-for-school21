#include <stdio.h>

int min(int a, int b, int c);

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", min(a, b, c));
    return 0;
}

int min(int a, int b, int c)
{
    int min = (a > b) ? b : a;
    return (min > c) ? c : min;
}
