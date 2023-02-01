#include <stdio.h>



int main(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
	if (ch == '\n')
	{
	    printf("simbol \\n ASCII %d\n", ch);
	}
	else if (ch == '\t')
	{
	    printf("simbol \\t ASCII %d\n", ch);
	}
	else
            printf("simbol %c ASCII %d\n", ch, ch);
    }
    return 0;
}

