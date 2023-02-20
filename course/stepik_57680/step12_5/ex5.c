#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000

int cmpfunc(const void * p1, const void * p2);

int main(void)
{
    char arr[SIZE];
    char ch;
    int i = 0;
    while((ch = getchar()) != EOF)
        arr[i++] = ch;
    arr[i] = '\0';
    qsort(arr, strlen(arr)-2, sizeof(char), cmpfunc);
    puts(arr);
    
    return 0;
}

int cmpfunc(const void * p1, const void * p2)
{
    char x = *(char *)p1;
    char y = *(char *)p2;
    return (x > y) - (x < y);
}
