#include <stdio.h>

int main(void)
{
    int x;
    int count = 0;
    int upper = 0;
    while (scanf("%d", &x) == 1)
    {
	count++;
	if (x > 170)
	    upper++;	
    }
    printf("%d %d\n", count, upper);
}
