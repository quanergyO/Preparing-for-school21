#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_palind(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%s\n", is_palind(n) ? "YES": "NO");
    return 0;
}

bool is_palind(int n)
{
    bool flag = true;
    int tmp = n;
    int len_n = 0;
    while (tmp != 0)
    {
	len_n++;
	tmp /= 10;	
    }
    int tmp1, tmp2;
    tmp1 = tmp2 = n;

    for (int i = 0, exp = len_n - 1; i < len_n/2; i++, exp--)
    {
	int ost = tmp1 % 10;
	int st = (int)(tmp2 / (pow(10, exp))) % 10;
	if (ost != st)
	   return false;
	tmp1 /= 10;
    }
    return true;
}
