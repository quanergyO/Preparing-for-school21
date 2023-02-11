#include <stdio.h>
#include <string.h>

#define SIZE 50

int main(void)
{
    char ar[SIZE];
    char ch;
    while (scanf("%s", ar) == 1)
    {
	if (ar[0] == ar[strlen(ar) - 1])
	    printf("%s ", ar);
    }
    return 0;
}
