#include <stdio.h>

double cube(double num);

int main(void)
{
    double a;
    scanf("%lf", &a);
    printf("%lf\n", cube(a));
    return 0;
}

double cube(double num)
{
    return num * num * num;
}
