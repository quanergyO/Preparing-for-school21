#include <stdio.h>

double func(double a, double b);

int main(void)
{
    double c = func(1.5, 3.5);
    printf("%lf\n", c); 
    return 0;
}

double func(double a, double b)
{
    return 2 / ((1/a) + (1/b));
}
