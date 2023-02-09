#include <stdio.h>
#include "ex1.h"

float total = 0.0;
short count = 0;
short tax_percent = 6;


int main(void)
{
    float val;
    printf("Price: ");
    while (scanf("%f", &val) == 1)
    {
	printf("total now : %.2f\n", add_with_tax(val));
	printf("Price: ");
    }
    printf("Total = %.2f, count = %hd\n", total, count);
    return 0;
}

float add_with_tax(float f)
{
    float tax_rate = 1 + tax_percent / 100;
    total += f * tax_rate;
    count++;
    return total;
}
