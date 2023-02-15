#include <stdio.h>
#include <string.h>

#define SIZE 100

typedef struct {
    char a[SIZE];
    unsigned int n;
} Decimal;

void elong_print(Decimal num);
Decimal add(Decimal x, Decimal y);
Decimal scan_decimal(void);

int main(void)
{
    Decimal a = {{1}, 0};
    Decimal b = {{9}, 0};
    Decimal res, res2;

    res = add(a, b);
    printf("%d: ", res.n);
    elong_print(res);

    return 0;
}

Decimal add(Decimal x, Decimal y)
{
    Decimal min, max;
    min = (x.n > y.n)? y: x;
    max = (x.n > y.n)? x: y;
    for (int i = 0; i <= min.n; i++)
    {
        int sum = max.a[i] + min.a[i];
        int ost = sum % 10;
        int dec = sum / 10;
        max.a[i] = ost;
        max.a[i+1] += dec;
        if (i == max.n && sum > 9)
            max.n += 1;
    }
    return max;
}
   
void elong_print(Decimal num)
{
    for (int i = num.n; i >= 0; i--)
        printf("%d", num.a[i]);
    putchar('\n');
}

Decimal scan_decimal(void)
{
    Decimal res;
    char num[100];
    scanf("%s", num);
    int len = strlen(num) - 1;
    int i, j;
    int n = -1;
    for (i = len, j = 0; i >= 0; i--, j++)
    {
        res.a[j] = num[i] - '0';
        n++;
    }
    res.n = n;
    return res; 
}
