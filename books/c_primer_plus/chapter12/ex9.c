#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int count_words;
    printf("How many words: ");
    scanf("%d", &count_words);
    char **p; 
    p = (char **) malloc(sizeof(char *) * count_words);
    char tmp[30];
    for (int i = 0; i < count_words; i++)
    {
	scanf("%s", tmp);
	p[i] = (char *) malloc(sizeof(char) * strlen(tmp) + 1);
	int j;
	for (j = 0; j < strlen(tmp); j++)
	{
	    p[i][j] = tmp[j];
	}
	p[i][j] = '\0';
	
    }
    for (int i = 0; i < count_words; i++)
    {
	puts(p[i]);
	free(p[i]);
    }
    free(p);
    return 0;
}
