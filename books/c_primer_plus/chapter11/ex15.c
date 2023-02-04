#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char ch;
    int i = 0;
    while ((ch = argv[1][i++]) != '\0')
    {
	if (!(isdigit(ch)))
	{
	    printf("return 0\n");
	    return 0;
	}
    } 
    puts("end");
    return 0;
}
