#include <stdio.h>

int main(void)
{
    char ch;
    char array[8];
    int count = 0;
    while ((ch = getchar()) != '#')
    {
	if (count == 7)
	{
	    count = 1;
	    for (int i = 0; i < 8; i++)
	    {
		printf("%c - %d\n", array[i], array[i]);
	    }
	}
	else
	{
	    array[count++] = ch;    
	}
    }
    return 0;
}
