#include <stdio.h>

double func(double num1, double num2);

int main(void)
{
    double num1, num2;
    while (scanf("%lf%lf", &num1, &num2) == 2)
    {
	printf("%lf\n", func(num1, num2));
    }
    return 0;
}

double func(double num1, double num2)
{
    return (num1 - num2) / (num1 * num2);
}
