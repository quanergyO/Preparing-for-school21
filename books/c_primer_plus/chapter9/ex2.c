#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    chline('&', 4, 9);
    return 0;
}

void chline(char ch, int i, int j)
{
    for (int k = 0; k <= j; k++)
    {
	if (i <= k && k <= j)
	    printf("%c", ch);
	else
	    putchar(' ');
    }
    printf("\n");
}
