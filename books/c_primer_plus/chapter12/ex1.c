#include <stdio.h>

void critic(int * units);

int main(void)
{
    int units;
    scanf("%d", &units);
    while (units != 56)
    {
	critic(&units);
    }
    return 0;
}

void critic(int * units)
{
    scanf("%d", units);
}
