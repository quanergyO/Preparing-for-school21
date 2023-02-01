#include <stdio.h>

int main(void)
{
    double balance = 1000000;
    int years = 0;
    while (balance > 0)
    {
	balance -= 100000;
	balance += balance * 0.08;
	years++;
    }
    printf("%d\n", years);
    return 0;
}
