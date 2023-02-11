#include <stdio.h>
#include <string.h>

#define SIZE 50

int main(void)
{
    char ar[SIZE];
    while (scanf("%s", ar) == 1)
    {
	for (int i = strlen(ar) - 1; i >= 0; i--)
	{
	    putchar(ar[i]);
	}
	putchar(' ');
    }
    return 0;
}
