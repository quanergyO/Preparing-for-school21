#include <stdio.h>

int main(void)
{
    int mid;
    int low = 0;
    int high = 100;
    char ch;
    while (getchar != 'y')
    {
	mid = (low + high) / 2;
	printf("Your digit is %d\n", mid);
	printf("1) Yes 2) More 3) Less\n");
	scanf("%c", &ch);
	getchar();
	switch (ch)
	{
	    case '1': printf("Easy\n"); return 0;
	    case '2': low = mid + 1; break; 
	    case '3': high = mid - 1; break;
	}
    }
    return 0;
}
