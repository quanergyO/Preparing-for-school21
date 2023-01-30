#include <stdio.h>

int main(void)
{
    double num1, num2;
    while (scanf("%lf%lf", &num1, &num2) == 2)
    {
	printf("%lf\n", (num1-num2) / (num1*num2));
    }
    return 0;
}
