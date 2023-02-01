#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int count_words = 0;
    int count_simbols = 0;
    float avg_simbols_in_words;
    while ((ch = getchar()) != EOF)
    {
	if (ch == '\n' || ch == ' ' || ispunct(ch) || ch == '\t')
	{
	    count_words++;
	}
	else
	    count_simbols++;
    }
    avg_simbols_in_words = count_simbols / (float)count_words;
    printf("avg = %f\n", avg_simbols_in_words);
    return 0;
}
