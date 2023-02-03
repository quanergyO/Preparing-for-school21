#include <stdio.h>

int main(void)
{
    int k;
    scanf("%d", &k);
    int simbol = 'Z' - k + 1;
    for (int i = 0; i < k; i++)
    {
	printf("%c", simbol);
	simbol++;
    }
    putchar('\n');
    return 0;
}
