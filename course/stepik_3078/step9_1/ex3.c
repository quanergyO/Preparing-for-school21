#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int n;
    char ch;
    scanf("%d", &n);
    char array[n];
    for (int i = 0; i < n; i++)
    {
	while ((ch = getchar()) == ' ' || ch == '\n');
	array[i] = tolower(ch);	
    }

    int array_answer[26] = {0};
    for (int i = 0; i < n; i++)
    {
	int index = array[i] - 'a';
	array_answer[index]++;	
    }

    for (int i = 0; i < 26; i++)
    {
	printf("%d ", array_answer[i]);
    } 
    putchar('\n');

    return 0;
}
