#include <stdio.h>

char * mystrncpy(const char *s1, char *s2, int n);

int main(int argc, char **argv)
{
    char string[81] = "Kadnay gey!";
    char * string2 = "loves kiss ass.";
    char * p = mystrncpy(string, string2, 5);
    puts(p);
    return 0;
}

char * mystrncpy(const char *s1, char *s2, int n)
{
    char * p = s1;
    char * res = s1;
    while (*s1 != '\0')
    {
	p = ++s1;
    } 
    int i = 0;
    while (i++ < n - 1)
    {
	*p = *s2;
	s2++; p++;
    }
    *(p+1) = '\0';
    return res;
}
