#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(void)
{
    char ar[SIZE];
    fgets(ar, SIZE, stdin);
    int len = strlen(ar) - 1;
    int start, end;
    int flag = 0;
    for (int i = 1; i <= len; i++)
    {
	char prev = ar[i-1];
	if (prev = '/' && ar[i] == '*')
	{
	    start = i-1;
	    if (i == len - 1)
		break;
	    for (int j = i+2; j < len; j++)
	    {
		char prev2 = ar[j-1];
		if (prev2 == '*' && ar[j] == '/')
		{
		    flag = 1;
		    end = j;
		    goto A;
		}
	    }
	}
    }
A:
    printf("start = %d end = %d flag = %d\n", start, end, flag);
    if (flag)
    {
        for (int i = 0; i <= len; i++)
        {
	    if (i < start || i > end)
	    {
	        putchar(ar[i]);
	    }
        }
    }
    else 
	puts(ar);

    return 0;
}
