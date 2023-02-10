#include <stdio.h>
#include "ex2_2.h"

static int mode = 0;
static int distance = 0;
static float fuel = 0;

int main(void)
{
    printf("Type 0 for metric or 1 for usa: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
	get_info();
	show_info();
	printf("type 0 for metric or 1 for usa (-1 for quit): ");
	scanf("%d", &mode);
    } 
    printf("END\n");
    return 0;
}

void show_info(void)
{
    if (mode == 0)
    {
	float res = fuel / (float)(distance / 100.0);
	printf("%.2f litrs / 100 km\n", res);
    }
    if (mode == 1)
    {
	float res = distance / fuel;
	printf("%.2f mili / galon\n", res);
    }
}

void get_info(void) 
{
    if (mode == 0)
    {
	printf("Type distance in km: ");
	scanf("%d", &distance);
	printf("Type fuel in litr: ");
	scanf("%f", &fuel);
    } 
    if (mode == 1)
    {
	printf("Type distance in mill: ");
	scanf("%d", &distance);
	printf("Type fuel in galon: ");
	scanf("%f", &fuel);
    }
}
