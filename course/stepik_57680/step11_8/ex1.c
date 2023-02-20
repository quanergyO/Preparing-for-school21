#include <stdio.h>
#include <string.h>

#define SIZE 1000

void replace(char * src);

int main(void)
{
    char str[SIZE];
    while (fgets(str, SIZE-1, stdin) != NULL)
    {
        char * p;
        while ((p = strstr(str, "bomb")) != NULL)
        {
            replace(str);
        }
        printf("%s", str);
    }
}

void replace(char * src)
{
    size_t lenbomb = strlen("bomb");
    size_t lenwater = strlen("watermelon");
    
    char * p = strstr(src, "bomb");
    if (p == NULL)
        return;
    memmove(p+lenwater, p+lenbomb, strlen(p+lenbomb)+1);
    memcpy(p, "watermelon", lenwater);
}

