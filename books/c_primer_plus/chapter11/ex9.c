#include <stdio.h>
#include <string.h>

void reverse_func(char *s);

int main(int argc, char **argv)
{
    char s[] = "abcde";
    reverse_func(s);
    puts(s);
    return 0;
}

void reverse_func(char *s)
{
    int s_len = strlen(s);
    char reverse[s_len + 1];
    char *p = reverse;
    for (int i = s_len - 1, j = 0; i >= 0; i--, j++)
    {
	printf("s[%d] = %c\n", i, s[i]);
	reverse[j] = s[i];
	printf("reverse[%d] = %c\n", j, reverse[j]);
    }
    reverse[s_len] = '\0';
    while (*p != '\0')
    {
	*s++ = *p++;
    }
}
