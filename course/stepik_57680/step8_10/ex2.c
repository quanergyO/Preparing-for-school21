#include <stdio.h>

int chek_equals(const int *a, int n);

int main(void)
{
    int n; scanf("%d", &n);
    int array[n];
    int sum = 0;
    for (int i = 0; i < n; scanf("%d", &array[i++]))
	    ;
    int i = 0;
    while (!chek_equals(array, n))
    {
	int next = (i == n-1) ? 0: i+1;
	int sum_of2 = array[i] + array[next];
	if (sum_of2 % 2 == 1)
	{
	    sum++;
	    sum_of2--;
	}	
	array[i] = sum_of2 / 2;
	array[next] = sum_of2 / 2;
	i = (i == n - 1) ? 0: i+1;	
    } 

    printf("%d %d\n", sum, array[0]);
    return 0;
}

int chek_equals(const int *a, int n)
{
    int flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
	if (a[i] != a[i+1])
	{
	    flag = 0;	
	    break;
	}
    }
    return flag;
}
