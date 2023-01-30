#include <stdio.h>

int main(void)
{
    char s = 'A';
    for (int i = 1; i <= 6; i++)
    {
	for (int j = 0; j < i; j++)
	{
	    printf("%c", s);
	    s++;
	}
	printf("\n");
    }
    return 0;
}
