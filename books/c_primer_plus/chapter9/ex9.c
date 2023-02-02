#include <stdio.h>

double power(double number, int exponent);

int main(void)
{
    double num;
    int exp;
    scanf("%lf%d", &num, &exp);
    printf("%lf\n", power(num, exp));
    return 0;
}

double power(double number, int exponent)
{
    if (exponent == 0) return 1;
    else if (exponent > 0)
    {
	if (exponent % 2 == 0)
	    return power(number, exponent / 2) * power(number, exponent / 2);
	else
	    return number * power(number, exponent - 1);
    }

    return 1.0 / power(number, -exponent);	    
}
