#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
	switch (ch)
	{
	    case '.': putchar('!'); count++; break;
            case '!': putchar('!'); putchar('!'); count++; break;
	    default: putchar(ch);		      
	}
    }
    printf("%d\n", count);
    return 0;
}
