#include <stdio.h>

int main(void)
{
    int l, k, s;
    scanf("%d%d%d", &l, &k, &s);
    int days = 0;
    int a_l = 0;
    while (a_l < s)
    {
	a_l += l;
	l += k;
	days++;
    }
    printf("%d\n", days);
    return 0;
}
