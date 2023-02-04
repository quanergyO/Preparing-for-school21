#include <stdio.h>

void func(char * ar, int n);

int main(int argc, char **argv)
{
    char word[30];
    func(word, 6);
    puts(word);
    return 0;
}

void func(char * ar, int n)
{
    char ch;
    int count = 0;
    int i = 0;
    while ((ch = getchar()) != '\n' && ch != ' ' && ch != '\t' && ch != '\0', ++count < n)
    {
	ar[i++] = ch;
    }
    ar[i] = '\0';
}
