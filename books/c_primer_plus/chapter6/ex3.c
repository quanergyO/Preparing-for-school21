#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 6; i++)
    {
	char s;
	for (int j = 0, s = 'F'; j < i; j++, s--)
	{
	    printf("%c", s);
	}
	printf("\n");
    }
    return 0;
}
