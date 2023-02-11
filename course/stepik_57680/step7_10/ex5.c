#include <stdio.h>

int main(void)
{
    int d, k;
    scanf("%d%d", &d, &k);
    int num = k;
    int count = 0;
    while (num != 0)
    {
	int tmp = num % 10;
	num /= 10;
	if (tmp == d)
	    count++;	
    }
    printf("%d %d %d\n", d, k, count);
    return 0;
}
