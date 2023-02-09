#include <stdio.h>

int main(void)
{
    char c;
    int r = 0;
    while (( c = getchar()) != EOF)
    {
	if (r < 0)
	{
	    printf("NO\n");
	    return 0;
	}
	if (c == '(')
	    r++;
	else if (c == ')')
	    r--;
    }
    printf("%s\n", (r == 0) ? "YES": "NO");
    return 0;
}
