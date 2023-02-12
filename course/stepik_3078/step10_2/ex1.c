#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    int * p_a = &a;
    int * p_b = &b;
    printf("%d\n", *p_a + *p_b);

    return 0;
}
