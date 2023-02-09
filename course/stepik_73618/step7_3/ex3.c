#include <stdio.h>

int main(void)
{
    int s, L, k;
    scanf("%d%d%d", &s, &L, &k);
    int dist = s;
    int step = 0;
    int count = 0;
    while (dist >= step)
    {
	step = L;
	L += k;
	dist -= step;
	count++;
	printf("step = %d L = %d count = %d dist = %d\n", step, L, count, dist);
    }
    printf("%d %d\n", count, dist);
    return 0;
}
