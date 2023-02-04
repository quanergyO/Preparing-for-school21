#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char ch;
    int count_A = 0, count_a = 0, count_d = 0, count_word = 0, count_p = 0;
    char word[20];
    while ((ch = getchar()) != EOF)
    {
	if (isspace(ch))
	{
	    count_word++;
	}
	if (islower(ch))
	{
	    count_a++;
	}
	if (isupper(ch))
	{
	    count_A++;
	}
	if (isdigit(ch))
	{
	    count_d++;
	}
	if (ispunct(ch))
	{
	    count_p++;
	}
    }
    printf("Upper = %d lower = %d digit = %d word = %d punct = %d\n", count_A, count_a, count_d, count_word, count_p);
    return 0;
}
