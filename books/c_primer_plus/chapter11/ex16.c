#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char ch;
    if (argv[1])
    {
        char * arg = argv[1];
        while ((ch = getchar()) != EOF)
        {
        	switch (arg[1])
        	{
	        case 'p': putchar(ch); break;
	        case 'u': putchar(toupper(ch)); break;
	        case 'l': putchar(tolower(ch)); break;
         	}
        }
    }
    else
	while ((ch = getchar()) != EOF)
	{
	    putchar(ch);
	}
    return 0;
}
