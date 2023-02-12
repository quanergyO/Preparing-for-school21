#include <stdio.h>
#include <string.h>

#define SIZE 50

int main(void)
{
    char str1[SIZE];
    char str2[SIZE];
    fgets(str1, SIZE, stdin);
    fgets(str2, SIZE, stdin);
    if (!strcmp(str1, str2))
	puts("yes");
    else
	puts("no");

    return 0;
}
