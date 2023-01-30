#include <stdio.h>

int main(void)
{
    int num1, num2;
    int sum = 0;
    printf("Type 2 numbers: ");
    scanf("%d%d", &num1, &num2);
    for (int i = num1; i <= num2; i++)
    {
	sum += i * i;
    }
    printf("\nsum = %d\n", sum);
    do {
	printf("type new 2 numbers: ");
	scanf("%d%d", &num1, &num2);
	sum = 0;
	for (int i = num1; i <= num2; i++)
	{
	    sum += i*i;
	}
	printf("\nsum = %d\n", sum);

    } while (num1 = num2);
    return 0;
}
