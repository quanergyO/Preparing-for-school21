#include <stdio.h>
#include <string.h>

int main(void)
{
    char ar[100];
    char ar_reverse[100];
    fgets(ar, 100, stdin);
    int len = strlen(ar) - 1;
    int count = 0;
    int count2 = 0;
    if (len <= 3)
    {
	puts(ar);
    }
    else
    {
	for (int i = len-1; i >= 0; i--)
	{
	    ar_reverse[count2++] = ar[i];
	    count++;
	    if (count % 3 == 0)
	    {
		ar_reverse[count2++] = ' ';
		count = 0;
	    }
	}	
    }
    for (int i = count2 - 1; i >= 0; i--)
    {
	putchar(ar_reverse[i]);
    }
    putchar('\n');
    return 0;
}
