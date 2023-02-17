#include <stdio.h>
#include <string.h>

#define SIZE 50

char * my_strcat(char *dest, const char *src);

int main(void)
{
    char str1[SIZE];
    char str2[SIZE];
    scanf("%s", str1);
    scanf("%s", str2);
    char *p = my_strcat(str1, str2);
    printf("%s\n", p);

    return 0;
}

char * my_strcat(char *dest, const char *src)
{
    int len1 = strlen(dest);
    int len2 = strlen(src);
    int i, j;
    for (i = len1, j = 0; i < len1+len2; i++, j++)
    {
        dest[i] = src[j];
        printf("dest[%d] = %c src[%d] = %c\n", i, dest[i], j, src[j]);
    }
    dest[i] = '\0';
    return dest;
}
