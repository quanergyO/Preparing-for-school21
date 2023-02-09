#include <stdio.h>

int main(void)
{
    int s, L, k;
    scanf("%d%d%d", &s, &L, &k);
    int dist = s;
    int count = 0;
    int step = L;
    while (step > 0 && dist >= step)
    {
	dist -= step;	
	step -= k;
	count++;
    }
    printf("%d %d\n", count, dist);
    return 0;
}
