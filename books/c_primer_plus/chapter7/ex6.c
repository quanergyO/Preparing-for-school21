#include <stdio.h>

int main(void)
{
    char ch, old_ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
	if (old_ch == 'e' && ch == 'i')
	    count++;
	old_ch = ch;
    }
    printf("%d\n", count);

    return 0;
}
