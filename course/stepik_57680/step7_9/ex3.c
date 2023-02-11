#include <stdio.h>
#include <limit.h>

int main(void)
{
    int n;
    int min = INT_MAX;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
	int tmp;
	scanf("%d", &tmp);
	if (tmp < min)
	    min = tmp;	
	printf("%d ", tmp);
    }
    printf("\n%d", min);
    return 0;
}
