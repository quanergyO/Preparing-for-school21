#include <stdio.h>

unsigned long long fibonacci(int number);

int main(void)
{
    int num1;
    scanf("%d", &num1);
    printf("%llu\n", fibonacci(num1));
    return 0;
}

unsigned long long fibonacci(int number)
{
    int num1 = 1;
    int num2 = 1;
    unsigned long long res = 1;
    for (int i = 0; i < number - 2; i++)
    {
	res = num1 + num2;
	int tmp = num2;
        num2 = res;
	num1 = tmp;
    }
    return res;
}
