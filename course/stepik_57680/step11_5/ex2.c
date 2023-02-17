#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];
    char res[100];
    int len = 0;
    while (scanf("%s", word) == 1)
    {
        if (strlen(word) > len)
        {
            len = strlen(word);
            strcpy(res, word);
        }
    }
    printf("%s %d\n", res, len);

    return 0;
}
