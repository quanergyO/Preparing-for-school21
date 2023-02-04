#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char * arg = argv[1];
    char ch;
    while ((ch = getchar()) != EOF)
    {
	switch (arg[1])
	{
	    case 'p': putchar(ch); break;
	    case 'u': putchar(toupper(ch)); break;
	    case 'l': putchar(tolower(ch)); break;
	}
    }
    return 0;
}
