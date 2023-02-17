#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int count_str_in(const char * src, const char * search);

int main(void)
{
    char str[50];
    int count = 0;
    while (scanf("%s", str) == 1)
    {
        count += count_str_in(str, "bomb");
    }
    printf("%d\n", count);
    return 0;
}

int count_str_in(const char * src, const char * search)
{
    int count = 0;
    int search_i;
    for (int i = 0; i < strlen(src); i++)
    {
        if (src[i] == search[0])
        {
            bool flag = true;
            for (int j = i, search_i = 0; j < i + strlen(search); j++, search_i++)
            {
                if (src[j] != search[search_i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                count++;
            }
        }
    }
    return count;
}

