#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 100

bool is_pallindrom(const char * str);
void find_decor(const char * src, int divider, char * res);

int main(void)
{
    char str[SIZE];
    scanf("%s", str);
    if (strlen(str) == 1)
    {
	printf("%s\n", str);
        return 0;
    }
    if (!is_pallindrom(str))
    {
        printf("NO\n");
        return 0;
    }
    int size = strlen(str) / 2 + 1;
    char res[size];
    for (int i = 0; i < size; i++)
	res[i] = '\0';
    find_decor(str, 2, res);
    printf("%s\n", (res[0]) ? res : "NO");

    return 0;
}

void find_decor(const char * src, int divider, char * res)
{
     if (divider > strlen(src))
	return;
     if (strlen(src) % divider != 0)
     {
	find_decor(src, divider + 1, res);
	return;
     }

     int i, j;
     bool flag = true;
     int index = 0;
     char arr_str[divider][strlen(src) / divider + 1];
     for (i = 0; i < divider; i++)
     {
	for (j = 0; j < strlen(src) / divider; j++)
	    arr_str[i][j] = src[index++];
	
	arr_str[i][j] = '\0';
     }
     for (i = 0; i < divider-1; i++)
     {
	if (strcmp(arr_str[i], arr_str[i+1]))
	{
	    flag = false;
	    find_decor(src, divider + 1, res);
	}
     }
     if (flag)
	strncpy(res, arr_str[i], strlen(src) / divider + 1);
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
