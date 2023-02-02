#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    chline('^', 5, 4);

    return 0;
}

void chline(char ch, int i, int j)
{
    for (int k = 0; k < i; k++)
    {
	for (int h = 0; h < j; h++)
	{
	    putchar(ch);
	}
	putchar('\n');
    }
}
