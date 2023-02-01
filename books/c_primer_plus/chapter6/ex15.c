#include <stdio.h>

int main(void)
{
    char array[255];
    scanf("%c", &array[0]);
    int index = 0;
    while (array[index] != '\n')
    {
	index++;
	scanf("%c", &array[index]);
    }
    while (index >= 0)
    {
	printf("%c", array[index]);
	index--;
    }
    printf("\n");

    return 0;
}
