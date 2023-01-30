#include <stdio.h>

int main(void)
{
    int first, second;
    scanf("%d%d", &first, &second);
    for (int i = first; i < second; i++)
    {
	printf("%4d%4d%4d", i, i * i, i * i * i);
	printf("\n");
    }
    return 0;
}
