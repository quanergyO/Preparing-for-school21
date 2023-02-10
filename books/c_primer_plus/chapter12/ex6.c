#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main(void)
{
    int arr[SIZE];
    int counter[10] = {0};
    for (int i = 0; i < SIZE; i++)
    {
	int x = rand() % 10 + 1;
	counter[x-1]++;
	arr[i] = x;	
    }

    for (int i = 0; i < 10; i++)
    {
	printf("%d = %d\n", i+1, counter[i]);
    }
    return 0;
}
