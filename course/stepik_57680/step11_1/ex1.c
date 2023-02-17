#include <stdio.h>
#include <string.h>

#define N 100

typedef struct {
    char a[N];
    unsigned int n;
} Decimal;

void elong_set(Decimal * res, const char str[]);
void elong_print(Decimal num);

int main(void)
{
    Decimal res;
    elong_set(&res, "123456789");

    elong_print(res);

    return 0;
}

void elong_set(Decimal * res, const char str[])
{
    int len = strlen(str);
    int i, j;
    res->n = -1;
    for (i = len-1, j = 0; i >= 0; i--, j++)
    {
        res->a[j] = str[i] - '0';
        res->n += 1;
    }
}

void elong_print(Decimal num)
{
    for (int i = num.n; i >= 0; i--)
        printf("%d", num.a[i]);
    putchar('\n');
}
