#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 100

bool is_pallindrom(const char * str);
char * find_decor(const char * str, size_t len, char * res);

int main(void)
{
    char str[SIZE];
    scanf("%s", str);
    if (!is_pallindrom(str))
    {
        printf("NO\n");
        return 0;
    }
    int size = strlen(str) / 2 + 1;
    char res[size];
    char * p = find_decor(str, strlen(str) / 2, res);
    printf("%s\n", (p == NULL) ? "NO": p);

    return 0;
}

char * find_decor(const char * str, size_t len, char * res)
{
    if (len == 0)
        return NULL;
    for (int i = 0, j = strlen(str)/2; i < len; i++, j++)
    {
        if (str[i] != str[j])
            return find_decor(str, len - 1, res);
    }
    strncpy(res, str, len);
    return res;
}


bool is_pallindrom(const char * str)
{
    int len = strlen(str);
    for (int i = 0, j = len-1; i < len/2; i++, j--)
    {
        if (str[i] != str[j])
            return false;
    }
    return true;
}
