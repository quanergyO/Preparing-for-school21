#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    while ((ch = getchar()) != EOF)
    {
	if (isupper(ch))
	    count1++;
	else if (islower(ch))
	    count2++;
	else
	    count3++;
    }

    printf("upper = %d, lower = %d, etc = %d\n", count1, count2, count3);
    return 0;
}
