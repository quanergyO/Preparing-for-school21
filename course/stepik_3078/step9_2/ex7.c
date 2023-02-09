#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    int x = 0;
    int y = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
	int steps;
	char *arr;
	scanf("%s %d", arr, &steps);
	switch (arr[0])
	{
	    case 'N': y += steps; break;
	    case 'E': x += steps; break;
	    case 'S': y -= steps; break;
	    case 'W': x -= steps; break;
	}	
    }
    printf("%d %d\n", x, y);
    return 0;
}
