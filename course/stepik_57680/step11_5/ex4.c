#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    while (scanf("%s", str) == 1)
    {
        if (strstr(str, "bomb") != NULL)
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}
