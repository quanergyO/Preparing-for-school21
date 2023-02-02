#include <stdio.h>

double negative_power(double num, int exponent);

int main(void)
{
    double num1;
    int exponent;
    scanf("%lf%d", &num1, &exponent);
    printf("%lf\n", negative_power(num1, exponent));
    	
    return 0;
}

double negative_power(double num, int exponent)
{
    double result = 1;
    if (exponent == 0)
	return 1;
    else if (exponent > 0)
    {
	for (int i = 0; i < exponent; i++)
	{
	    result *= num;
	}
	return result;
    } 
    else
    {
	for (int i = 0; i < -exponent; i++)
	{
	    result *= num;
	}
	return 1.0 / result;
    }
}
