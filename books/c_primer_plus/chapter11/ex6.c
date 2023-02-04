#include <stdio.h>

int is_within(char s, char *str);

int main(int argc, char **arg)
{
    char str[] = "Kadnay is gey!";
    printf("%d\n", is_within('g', str));
    return 0;
}

int is_within(char s, char *str)
{
    char ch;
    while (*str != '\0')
    {
	ch = *str;
	if (ch == s)
	    return 1;
	str++;
    }
    return 0;
}
