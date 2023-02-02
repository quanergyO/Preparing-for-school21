#include <stdio.h>
#include <ctype.h>

int number_in_alphabet(char ch);

int main(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
	if (!isalpha(ch))
    	    printf("Simbol %c in't letter\n", ch);
	else
	    printf("Simbol %c is letter and = %d\n", ch, number_in_alphabet(ch));	
    }
    return 0;
}

int number_in_alphabet(char ch)
{
    int num;
    if (!isalpha(ch))
	return -1;
    ch = tolower(ch);
    num = (int)ch - (int)'a' + 1;
    return num;
}
