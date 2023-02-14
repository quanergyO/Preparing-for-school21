#include <stdio.h>

#define SIZE 100

typedef struct {
    char a[SIZE];
    unsigned int n;
} Decimal;

void elong_print(Decimal num);

int main(void)
{
    Decimal x = {{'7', '4', '1'}, 2};
    Decimal zero = {{'0'}, 0};

    elong_print(x);
    elong_print(zero);

    return 0;
}

void elong_print(Decimal num)
{
    for (int i = num.n; i >= 0; i--)
        printf("%d", num.a[i] - '0');
    putchar('\n');
}
