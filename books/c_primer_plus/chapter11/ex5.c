#include <stdio.h>

char * strchr(const char * s, char c);

int main(int argc, char **argv)
{
    char word[40] = "Kadnay love sex with men";
    char *p = strchr(word, 'l');
    printf("%c\n", *p);
    return 0;
}

char * strchr(const char * s, char c)
{
    char * p;
    while (*s != '\0' && *s != c)
    {
	s++;
	p = s;
	
    }
    return p;
}
