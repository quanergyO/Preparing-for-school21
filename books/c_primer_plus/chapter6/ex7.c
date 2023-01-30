#include <stdio.h>
#include <string.h>

int main(void)
{
    char array[20];
    scanf("%s", array);
    int len = strlen(array);
    for (int i = len; i >= 0; i--)
    {
	printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
