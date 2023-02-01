#include <stdio.h>

#define MONEY_PER_HOUR 10
#define OVETIME 40
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 450
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))

int main(void)
{
    unsigned int hour;
    float salary, salary_after_taxes, taxes;
    scanf("%u", &hour);
    if (hour <= 40)
    {
	salary = hour * MONEY_PER_HOUR;
    }
    else
	salary = hour * MONEY_PER_HOUR * 1.5;

    if (salary <= BREAK1)
    {
	taxes = salary * RATE1;
    }
    else if (salary <= BREAK2)
    {
	taxes = BASE2;
    }
    else
    {
	taxes = BASE2 + (RATE3 * (salary - BREAK2)); 
    }
    salary_after_taxes = salary - taxes;
    printf("salary = %f after taxes = %f taxes = %f\n", salary, salary_after_taxes, taxes);

	
    return 0;
}
