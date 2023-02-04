#include <stdio.h>

void func1(char * arr, int n);

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    char array[n];
    func1(array, n);
    puts(array);
    return 0;
}

void func1(char *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
	arr[i] = getchar();
    }
    arr[n-1] = '\0';    
}
