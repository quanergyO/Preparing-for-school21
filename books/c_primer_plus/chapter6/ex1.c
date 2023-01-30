#include <stdio.h>

int main(void)
{
    char array[26];
    char s;
    for (int i = 0, s = 'a'; i < 26; i++, s++)
    {
	array[i] = s;
    }

    for (int i = 0; i < 26; i++)
	printf("%c ", array[i]);
    printf("\n");
    return 0;
}
