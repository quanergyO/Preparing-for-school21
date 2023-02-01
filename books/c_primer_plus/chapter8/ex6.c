#include <stdio.h>

char get_first(void)
{
    char ch;
    while ((ch = getchar()) == ' ')
	continue;
    return ch;
}

int main(void)
{
    char ch = get_first();
    printf("%c\n", ch);
    return 0;
}
