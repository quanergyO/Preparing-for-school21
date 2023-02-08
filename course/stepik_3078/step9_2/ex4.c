#include <stdio.h>
#include <string.h>

int main(void)
{
    char array[100];
    fgets(array, 100, stdin);
    int result = 0;
    for (int i = strlen(array) - 2, exponent = 0; i >= 0; i--, exponent++)
    {
	int digit = array[i] - '0';
	result += digit << exponent;
    } 
    printf("%d\n", result);
    return 0;
}
