#include <stdio.h>

int is_number_simple(int number);

int main(void)
{
    unsigned int number;
    scanf("%u", &number);
    for (int i = 3; i <= number; i++)
    {
	if (is_number_simple(i))
	    printf("%d\n", i);
    } 
    return 0;
}

int is_number_simple(int number)
{
    for (int i = 2; i < number; i++)
    {
	if (number % i == 0)
	    return 0;
    }
    return 1;
}
