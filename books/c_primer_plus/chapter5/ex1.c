#include <stdio.h>

#define MIN_IN_HOUR 60

int main(void)
{
    int min, hour, left;
    scanf("%d", &min);
    while (min > 0)
    {
	hour = min / MIN_IN_HOUR;
	left = min - (MIN_IN_HOUR * hour);
	printf("%02d:%02d\n", hour, left);
	printf("Type 0 to quit\n");
	scanf("%d", &min);	
    }

    return 0;
}
