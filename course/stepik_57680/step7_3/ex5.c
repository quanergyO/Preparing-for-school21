#include <stdio.h>

int main(void)
{
    int price, delta, money;
    scanf("%d%d%d", &price, &delta, &money);
    int wday = 0;
    int count = 0;
    while (money >= price)
    {
	wday++;
	if (wday == 8)
	{
	    price += delta;
	    wday = 1;
	    if (money < price)
		break;
	}
	money -= price;
	count++;
	printf("wday = %d, count = %d, money = %d, price = %d\n", wday, count, money, price);
    }

    printf("%d\n", count);
    return 0;
}
