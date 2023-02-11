#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int d, k;
    scanf("%d", &d);
    int c;
    int count = 0;
    printf("%d", d);
    while ((c = getchar()) != EOF)
    {
	int num = c - '0';
	if (num == d)
	    count++;
	if (c != '\n')
	    putchar(c);
    }
    printf(" %d\n", count);
    return 0;
}
