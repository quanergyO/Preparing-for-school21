#include <stdio.h>
#include "ex3_2.h"

int main(void)
{
    int mode = 0;
    int distance = 0;
    float fuel = 0;
    printf("Type 0 for metric or 1 for usa: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
	get_info(&distance, &fuel, mode);
	show_info(distance, fuel, mode);
	printf("type 0 for metric or 1 for usa (-1 for quit): ");
	scanf("%d", &mode);
    } 
    printf("END\n");
    return 0;
}

void show_info(const int distance, const float fuel, const int mode)
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

void get_info(int * distance, float * fuel, const int mode) 
{
    if (mode == 0)
    {
	printf("Type distance in km: ");
	scanf("%d", distance);
	printf("Type fuel in litr: ");
	scanf("%f", fuel);
    } 
    if (mode == 1)
    {
	printf("Type distance in mill: ");
	scanf("%d", distance);
	printf("Type fuel in galon: ");
	scanf("%f", fuel);
    }
}
