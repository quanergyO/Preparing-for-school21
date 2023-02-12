#include <stdio.h>

void print_date(int d, int m, int y, int k);

int main(void)
{
    int d, m, y, k;
    scanf("%d%d%d%d", &d, &m, &y, &k);
    print_date(d, m, y, k);
    return 0;
}

void print_date(int d, int m, int y, int k)
{
    switch (k)
    {
	case 0: printf("%02d.%02d.%02d\n", d, m, y % 100); break;
	case 1: printf("%02d.%02d.%04d\n", d, m, y); break;
	case 2: printf("%04d/%02d/%02d\n", y, m, d); break;
    }
}
