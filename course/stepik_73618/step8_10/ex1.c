#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    int banknotes[] = {5000, 1000, 500, 100, 50, 10, 5, 2, 1};
    int banknotes_count[9] = {0};
    for (int bill  = 0; bill < sizeof(banknotes) / sizeof(banknotes[0]); bill++)
    {
	while (banknotes[bill] <= num)
	{
	    num -= banknotes[bill];
	    banknotes_count[bill]++;
	}	
    }
    for (int i = 0; i < 9; i++)
    {
	printf("%d %d\n", banknotes[i], banknotes_count[i]);
    }
    return 0;
}
