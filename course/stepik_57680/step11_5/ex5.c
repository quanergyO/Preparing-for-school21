#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * stringtolower(char * s);

int main(void)
{
    char str[50];
    while (scanf("%s", str) == 1)
    {
        char * tmp = stringtolower(str); 
        if (strstr(tmp, "bomb") != NULL)
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");

    return 0;
}

char * stringtolower(char * s)
{
    int len = strlen(s);
    int i;
    for (i = 0; i < len; i++)
        s[i] = tolower(s[i]);
    s[i] = '\0';
    return s;
}
