#include <stdio.h>

int main(void)
{
    int number = 1;
    int even_count = -1;
    int odd_count = -1;
    float even_avg = 0;
    float odd_avg = 0;
    while (number != 0)
    {
	scanf("%d", &number);
	if (number % 2 == 0)
	{
	    even_count++;
	    even_avg += number;
	}
	else
	{
	    odd_count++;
	    odd_avg += number;
	}
    }
    printf("even: count = %d avg = %f\n", even_count, even_avg / even_count);
    printf("odd: count = %d avg = %f\n", odd_count, odd_avg / odd_count);

    return 0;
}
