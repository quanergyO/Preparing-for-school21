#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(void)
{
    const float rain[YEARS][MONTHS] = 
    {
	{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
	{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
	{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
	{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
	{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    const float (*year)[MONTHS] = rain;
    const float *months = rain[0];
    float subtot = 0;
    float total = 0;
    printf("YEAR  QUANTITY OF PRECIPITATION\n");
    for (int i = 0; i < YEARS; i++)
    {
	for (int j = 0; j < MONTHS; j++)
	{
	    subtot += *(*(rain + i) + j);
	}
	total += subtot;
	subtot = 0;
    } 
    printf("%.1f\n", total/YEARS);

    for (int j = 0; j < MONTHS; j++)
    {
	for (int i = 0; i < YEARS; i++)
	{
	    subtot += *(*(rain + i) + j);
	}
	printf("%4.1f", subtot/YEARS);
	subtot = 0;
    }
    putchar('\n');
    return 0;
}
