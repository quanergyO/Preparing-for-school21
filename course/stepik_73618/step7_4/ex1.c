#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    int dec = 1;
    int res = 0;
    int counter = x;
    while (counter != 0)
    {
	dec *= 10;
	counter /= 10;
    }
    while (x != 0)
    {
	dec /= 10;
	int ost = x % 10;
	res += ost * dec;
	x = x / 10;
    }
    printf("%d\n", res);
    return 0;
}
