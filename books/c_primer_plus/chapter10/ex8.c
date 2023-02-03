#include <stdio.h>

void copy_ptrs(int * inside, int * out, int * end);

int main(void)
{
    int source[7] = {1, 2, 3, 4, 5, 6, 7};
    int target[3];
    copy_ptrs(target, source+2, source+5);
    for (int i = 0; i < 3; i++)
    {
	printf("%d ", target[i]);
    }
    putchar('\n');
    return 0;
}

void copy_ptrs(int * inside, int * out, int * end)
{
    while (out < end)
    {
	*inside = *out;
	inside++; out++;
    }
}
