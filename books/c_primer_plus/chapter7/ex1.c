#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int count = 0;
    int count_space = 0;
    int count_n = 0;
    while ((ch = getchar()) != '#')
    {
	switch (ch)
	{
	    case ' ': count_space++; break;
	    case '\n': count_n++; break;
	    default: count++;
	}
    }
    printf("space = %d, \\n = %d, simvols = %d\n", count_space, count_n, count);
    return 0;
}
