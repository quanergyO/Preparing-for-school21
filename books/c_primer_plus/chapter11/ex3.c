#include <stdio.h>

void func(char * ar);

int main(int argc, char **argv)
{
    char word[30];
    func(word);
    puts(word);
    return 0;
}

void func(char * ar)
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n' && ch != ' ' && ch != '\t' && ch != '\0')
    {
	ar[i++] = ch;
    }
    ar[i] = '\0';
}
