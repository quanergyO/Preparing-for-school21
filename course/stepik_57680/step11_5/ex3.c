#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    while (scanf("%s", str) == 1)
    {
        if (!strcmp(str, "bomb"))
        {
           puts("YES");
           return 0;
        }
    }
    puts("NO");
    return 0;
}
