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
    getchar();
    int count = 0;
    int i = 0;
    char ch;
    while ((ch = getchar()) != ' ' && ch != '\t' && ch != '\n' && ++count < n)
    {
	arr[i++] = ch;	
    }
    arr[i] = '\0'; 
}
