#include <stdio.h>
#include <string.h>

void delete_space(char *s);

int main(int argc, char *argv[])
{
    char array[100];
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
	array[i++] = ch;
    }
    array[i] = '\0';
    delete_space(array);
    puts(array);
    return 0;
}

void delete_space(char *s)
{
    char *p = s;
    int s_len = strlen(s);
    char array[s_len+1];
    int i = 0;
    while (*p != '\0')
    {
	if (*p != ' ')
	{
	    array[i++] = *p;
	}	
	p++;
    }
    array[i] = '\0';
    for (int j = 0; j < i; j++)
    {
	s[j] = array[j];
    }

    s[i] = '\0';
}
