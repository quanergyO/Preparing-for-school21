#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[200];
    char ch;
    char ch2;
    fgets(text, 200, stdin);
    for (int i = 0; i < strlen(text); i++)
    {
	ch = text[i+1];
	if (text[i] != ' ')
	    putchar(text[i]);
	if (text[i] != ' ' && ch == ' ')
	    putchar(' ');	
    } 
    return 0;
}
