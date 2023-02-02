#include <stdio.h>

void to_base_n(unsigned int num1, unsigned int num2);

int main(void)
{
    unsigned int x, y;
    scanf("%u%u", &x, &y);
    to_base_n(x, y);
    putchar('\n');
    return 0;
}

void to_base_n(unsigned int num1, unsigned int num2)
{
    int r;
    r = num1 % num2;
    if (num1 >= num2)
	to_base_n(num1 / num2, num2);
    printf("%d", r);
    return;
}
