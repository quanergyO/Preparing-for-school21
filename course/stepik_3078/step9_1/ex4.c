#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch))
	printf("en");
    else if (isdigit(ch))
	printf("digit");
    else
	printf("error");
    return 0;
}
