#include <stdio.h>

#define RATE 0.15
#define RATE2 0.28
#define LONELY 17850
#define FAMILY 23900
#define JOINT 29750
#define SEPARATE 14875

float calculating_taxes(unsigned int limit);

int main(void)
{
    int category = 100;
    float taxes;
    while (category != 5)
    {
        printf("Type category:\n");
        printf("1. Lonely\n2. Family head\n3. Married joint household\n4. Married separate household\n");
        printf("5. For quit\n");
        scanf("%d", &category);
	switch (category)
	{
	    case 1: taxes = calculating_taxes(LONELY); break; 
	    case 2: taxes = calculating_taxes(FAMILY); break;
	    case 3: taxes = calculating_taxes(JOINT); break;
	    case 4: taxes = calculating_taxes(SEPARATE); break;
	    case 5: return 0;
	    default: continue;
	}
	printf("taxes = %.2f\n", taxes);
    }
    
    return 0;
}

float calculating_taxes(unsigned int limit)
{
    float taxes;
    unsigned int income;
    printf("Type your income: ");
    scanf("%u", &income);

    if (income <= limit)
    {
	taxes = income * RATE; 
    }
    else
    {
	unsigned int income2 = income - limit;
	taxes = income * RATE + income2 * RATE2; 
    } 
    return taxes;
}
